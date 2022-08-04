LUAKH_ROOT := $(PWD)
export LUAKH_ROOT
BUILD_DIR ?= build
QMK_KEYBOARDS = crkbd utu nammu atreus-acris atreus-astar crapple-II
QMK_TARGETS = $(patsubst %,$(BUILD_DIR)/luakh_rev1_%.hex,$(QMK_KEYBOARDS))
QMK_TAG ?= 0.15.13
QMK_DIR ?= qmk/$(QMK_TAG)

DIST_DIR = ./dist

all: link $(QMK_TARGETS)

# DIST =======================================================================
DIST_FILES = \
  $(patsubst %,$(DIST_DIR)/%.hex,$(QMK_KEYBOARDS)) \
  $(DIST_DIR)/eeprom-lefthand.eep \
  $(DIST_DIR)/eeprom-righthand.eep \
  $(DIST_DIR)/flash \

dist: $(DIST_FILES)
$(DIST_DIR)/%.hex: $(BUILD_DIR)/luakh_rev1_%.hex
	@mkdir -p $(@D)
	@cp -v $< $@
$(DIST_DIR)/eeprom-%.eep: $(QMK_DIR)/quantum/split_common/eeprom-%.eep
	@mkdir -p $(@D)
	@cp -v $< $@
$(DIST_DIR)/flash: tools/flash
	@mkdir -p $(@D)
	@cp -v $< $@
# DIST +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


.PHONY: $(QMK_KEYBOARDS)
%: $(BUILD_DIR)/luakh_rev1_%.hex

$(BUILD_DIR)/luakh_rev1_%.hex: $(QMK_DIR)/luakh_rev1_%.hex
	mkdir -p $(@D)
	cp $< $@

$(QMK_DIR)/luakh_rev1_%.hex: luakh/keymaps/%/* $(wildcard luakh/*)
	$(info [QMK] $* because $?)
	$(MAKE) -C $(QMK_DIR) luakh:$*

link: $(QMK_DIR)
link: $(QMK_DIR)/keyboards/luakh
$(QMK_DIR)/keyboards/luakh: luakh
	ln -sr $< $@

$(QMK_DIR):
	# -b 6f043c54
	git clone \
		--shallow-submodules \
		--recursive \
		--depth 1 \
		-b $(QMK_TAG) \
		https://github.com/qmk/qmk_firmware \
		$(QMK_DIR)

clean:
	-rm -rf $(BUILD_DIR)
	-$(MAKE) -C $(QMK_DIR) clean
	-rm $(QMK_DIR)/*.hex

tags:
	ctags -R $(QMK_DIR)/quantum $(QMK_DIR)/tmk_core

flash: dist
	cd dist && sudo ./flash
.PHONY: all link flash
