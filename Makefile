LUAKH_ROOT := $(PWD)
export LUAKH_ROOT
BUILD_DIR ?= build
QMK_KEYBOARDS = crkbd utu nammu atreus-acris atreus-astar crapple-II
QMK_TARGETS = $(patsubst %,$(BUILD_DIR)/luakh_rev1_%.hex,$(QMK_KEYBOARDS))
QMK_DIR = qmk

all: link $(QMK_TARGETS)

.PHONY: $(QMK_KEYBOARDS)
%: $(BUILD_DIR)/luakh_rev1_%.hex

$(BUILD_DIR)/luakh_rev1_%.hex: $(QMK_DIR)/luakh_rev1_%.hex
	mkdir -p $(@D)
	cp $< $@

$(QMK_DIR)/luakh_rev1_%.hex: luakh/keymaps/%/*
	$(info [QMK] $* because $?)
	$(MAKE) -C $(QMK_DIR) luakh:$*

link: $(QMK_DIR)
link: $(QMK_DIR)/keyboards/luakh
$(QMK_DIR)/keyboards/luakh: luakh
	ln -sr $< $@

$(QMK_DIR):
	git clone --recursive --depth 1 https://github.com/qmk/qmk_firmware $(QMK_DIR)

clean:
	rm -rf $(BUILD_DIR)
	$(MAKE) -C $(QMK_DIR) clean
	rm $(QMK_DIR)/*.hex

tags:
	ctags -R $(QMK_DIR)/quantum $(QMK_DIR)/tmk_core

.PHONY: all link
