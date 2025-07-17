# snekpad12

<!-- ![snekpad12](imgur.com image replace me!) -->
Add a photo of the real life board here?

*A 3x4 macropad with a custom board based on the rp2040!*

* Keyboard Maintainer: [Jake Butler](https://github.com/jlb2637)
* Hardware Supported: SnekPad12
* Hardware Availability: There are no plans to sell this commercially however all KiCAD files are zipped and available in the above folder!

Make example for this keyboard (after setting up your build environment):

    make snekpad12:default

Flashing example for this keyboard:

    make snekpad12:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available, (this means a custom button added by the user)
