# RP2040-Macro-pad
A 3x4 Hot Swappable Macro pad with a custom PCB, running on QMK.

This is my first board with a microcontroller implemented directly on the PCB!
I chose the RP2040 for the job as it is documented extensively and generally easy to get booting.
Helpful resources at the bottom for those who wish to do something similar!


##PCB Schematic & Layout

This board closely follows the RP2040 hardware design guide minimum requirements.
Impedence matched USB lines are likely unecessary for the low speed communication but good practice to learn about!
Test headers are not soldered on to final product.
The buttons are laid out in a classic keyboard matrix style.
(add photo of that section of schematic here)

One LED on the mcu power line to verify board is getting power.
One extra LED GPIO attached for any extra testing one may desire.

The finished Layout!
![LayoutV1](https://github.com/jlb2637/RP2040-Macro-pad/assets/47393028/19f7c9ec-b4b3-462c-9d69-eac619953c21)

## QMK Software
Two main files required for QMK that can be done in two different ways.
-data driven .JSON config
-C files

The default when creating a new keyboard is split one file data driven, one file C so I stuck with that.
macros go in the keymap.c
info.json mainly defines the hardware being used.


## 3D-Printed Enclosure
Designed using Onshape because its free! Main body printed in FDM and keycaps intended to be printed in resin for sharper image quality.

### Tasks 
- [ ] pull pcb cad from old laptop to post final revisions here
- [ ] come up with more uses for the remaining buttons
- [ ] learn QMK layers
- [ ] refine 3D Printed enclosure and keycaps

# Resources

## Hardware
https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
https://datasheets.raspberrypi.com/rp2040/hardware-design-with-rp2040.pdf
https://www.digikey.com/en/maker/projects/hardware-design-with-the-rp2040-part-1-schematic/c4326f0fd813413698d617cf625125ee

## Software

https://qmk.fm/
https://docs.qmk.fm/data_driven_config
https://docs.qmk.fm/feature_macros

## CAD
https://www.onshape.com/en/
