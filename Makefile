BUILD_DIR ?= build
QMK_KEYBOARDS = crkbd utu nammu atreus-acris atreus-astar
QMK_TARGETS = $(patsubst %,$(BUILD_DIR)/luakh_rev1_%.hex,$(QMK_KEYBOARDS))

all: $(QMK_TARGETS)

$(BUILD_DIR)/luakh_rev1_%.hex: qmk/.build/luakh_rev1_%.hex qmk
	mkdir -p $(@D)
	cp $< $@

qmk/.build/luakh_rev1_%.hex: luakh/keymaps/%/keymap.c qmk
	make -C qmk luakh:$*

qmk/keyboards/luakh: luakh
	ln -sr $< $@

qmk:
	git clone --recursive --depth 1 https://github.com/qmk/qmk_firmware qmk

.PHONY: all
