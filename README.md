# RP2040-Macro-pad
A 3x4 Hot Swappable Macro pad with a custom PCB, running on QMK.

This is my first board with a microcontroller implemented directly on the PCB!
I chose the RP2040 for the job as it is documented extensively and generally easy to get booting.
Helpful resources at the bottom for those who wish to do something similar!

![3x4x3dviewback](https://github.com/user-attachments/assets/ff82b1ff-b66a-4f2e-9820-d95938e9b966)


## PCB Schematic & Layout

The schematic was surprisingly easy to spin up as all of the supporting circuitry required by the RP2040 is covered extensively in the RP2040 hardware design guide. The guide covers details such as power, USB, and external memory.
I decided to include a USB-C port for ease of connectivity however, it is only operating at 2.0 full speed at its fastest. I made sure to Impedence match the USB traces even though it is generally considered uncessary for these speeds, it was an interesting topic and something I decided was good to practice! I left some extra space for several test points and headers along the power electronics and data lines just in case, always useful for debugging! There is also an LED on the 3.3V line that can be used as a great tool to verify if the mcu is recieving power as well as an extra LED on GPIO pin 15 to try out getting the standard 'blink' program running. The buttons are laid out in a classic keyboard matrix style to help cut down on the number of GPIO pins required, making routing the matrix of the board a breeze.
<!-- ![Button Matrix Closeup](https://github.com/user-attachments/assets/20fdd35b-b171-45cf-9745-aaf3a488537f) -->


![3x4xmacropadfullschematic](https://github.com/user-attachments/assets/9996d428-512d-4142-b5e7-4d7d56d758a8)
<p align="center">
  Full Schematic
</p>

![3x4 Macropad Layout](https://github.com/user-attachments/assets/d74f3dc5-6b87-4acd-bee6-82ea7ab14bdf)
<p align="center">
  The finished Layout!
</p>


## QMK Software
Two main files required for QMK that can be done in two different ways.
-data driven .JSON config
-C files

The default when creating a new keyboard is split one file data driven, one file C so I stuck with that structure. info.json is used mainly for definitions like what mcu is being used, what pins are used, what style of matrix is used, etc. keymap.c is where it gets interesting for most people as that's where all of the custom functions are defined. Each macro is first given a name and spot on the button matrix, then it is given a case in the switch statement within the process_record_user function where any actions and how those actions are triggered are described.

## 3D-Printed Enclosure
Designed using Onshape because its free! The main body was printed with an FDM machine and the keycaps are intended to be printed in resin for sharper image quality.

### Tasks 
- [ ] move images to center with markdown
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
