# nRF52840-Clone-Hero-Controller

This is a custom BLE enabled clone hero (or other rythm game) controller built around a xiao nRF52840 board.

## Why did I build this?

I played Lego Rock Band on the wii as a kid, and recently discovered clone hero as an alternative that allows you to play custom songs, make your own charts, and can run on a potato. However, the cheap wii controllers I had were annoying to use with their membrane switches, chunky usb reciever, and unweildy size. This motivated me to build a custom guitar controller with mechanical switches, BLE for battery life, and a body of my own design.\
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/3c9d32ba-e67f-4f90-b041-ab23a09ab27d" height="300"> \
Nostalgic, but improvable :)

## What's Clone Hero?

Clone hero is a rythm game similar to guitar hero or rock band. It's open source and can run on pretty much any computer.

  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2a291f2a-423a-485b-bcba-bcd4cbbe006e" height="200">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f56e9cb2-4ad9-4998-a978-c6972c8ca983" height="200">

You can configure almost any device to be used as an input, such as MIDI drums and keyboards, gamepads, or in my case a custom controller. 

  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/6b70ff5f-4da7-4c14-a0ab-9401a31274fe" height="200">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f2dd6d43-b17f-41fa-86e6-f3075d16ef4f" height="200">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/7e0d8432-29db-48b3-934f-368f25045a79" height="200">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/604cff66-c5ff-48bd-93a3-b08d6e27b55a" height="200">

## Why nRF52840?

I initially used an ESP32 for development and testing, but it ended up being too bulky and power hungry to run on the tiny lipo battery I wanted to use. This led me to choose the nRF52840 from Nordic Semiconductors. The nordic controller supports bluetooth low energy, it takes up about a quarter of the size, and sips power compared to an ESP32 even while transmitting (30mA vs 200+mA). It is a little more expensive, costing around $10 to the ESP32's $3, but the previously mentioned advantages make it worth the premium for me. 

<img src="https://media-cdn.seeedstudio.com/media/catalog/product/cache/bb49d3ec4ee05b6f018e93f896b8a25d/2/-/2-102010448-seeed-studio-xiao-nrf52840---font_1.jpg" height="300"> <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/e1aabae9-41f4-436f-87d9-879adf976def" height="300"> \
<a href="https://www.seeedstudio.com/Seeed-XIAO-BLE-nRF52840-p-5201.html">nRF52840 I used</a>                         
<a href="https://www.aliexpress.us/item/2251832863673404.html?spm=a2g0o.order_list.order_list_main.31.303b18028Ev81Z&gatewayAdapt=glo2usa">ESP32 I used</a>
## Body Design

To design the body, I traced an image of a stratocaster in Onshape, then after fixing some weird unruly spline points I was able to extrude it and add some triangular cutouts. It wasn't too difficult but it took a while to do by hand. The fretboard and headstock were designed the same way. \
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2ee516ed-50e7-47c2-9472-503d2a9701ef" height="300">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2ddec0f5-d8b1-416e-b938-4e5759a58ed5" height="300"> 

 Here's the tele I designed. \
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/081792e7-b3eb-40ea-a70b-b97aab385eb1" height="400"> 
\
\
The strum bar was a little tricky to dial in and it took a few revisions, but this is what I landed on. \
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/7685bd45-3a92-4fd1-b582-f79d3aa454d3" height="400"> 


## Parts

* 1 x Xiao nRF52840
* 7 x Low Profile Mechanical Switches (I used Gateron LP Reds) 
* Few feet of cat5 cable or several lengths of wire (9 conductors total)
* 14AWG Steel Wire or similar for strum bar axle
* 2 x small washers to fit wire (STL included)
* 3D Printer / filament
All parts can be found in the STLs folder

## Build
Note: This guide assumes the reader can route wires and solder given the appropriate connections

### 1. Print all the parts and see how they go together. You should have 11 total:

* 5 keycaps
* Headstock
* Fretboard
* Mounting plate
* Strum bar
* Strum body
* Guitar body
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/da7dfa24-fa96-4492-ae7f-b4655b5bca7f" height="400">

### 2. Bond the mounting plate and headstock to the fretboard
I used a 3D printing pen, but a soldering iron or CA glue should work as well.
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/cd7c44a8-a149-4e91-86f1-9aad61126d22" height="400"> \
This is also a good opportunity to run the wires for the switches through the mounting plate holes. I used a common ground and 5 conductors running to a cat5 cable. You should see a wire route running along the back of the fretboard for this cable.

### 3. Solder the switches on and snap them into the mounting plate

<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/cc0a5012-36d4-4bb0-baed-1e7a57483958" height="325"> <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/6153200d-8f14-4d81-bb37-aa470fea67ef" height="325"> \
At this point you can also press fit the key caps onto the switches. The mounting plate and keycaps might require some sanding to get a perfect fit. You should end up with something like this ⬆️.

### 4. Route cable / wires for fretboard

Here's the cable running down the fretboard: \
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/e106a729-7438-45a0-885e-c9a53262e0d6" height="400"> 

I used a soldering iron to punch a hold through the point where the cable route meets the guitar body: \
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/a84e1ec2-b34b-4642-909c-ec39921b3489" height="400"> 

### 5. Assemble strum bar / mount to guitar body

The switches should snap into the strum body, then the strum bar can be secured via the steel wire axle and some washers. 
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/3a28f4c4-d903-4791-b47b-6ec9d8579dda" height="400"> 
\
Here are the wires leading to the strum bar: \
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/6e6bdb33-71cb-4a99-bf46-3bea942ef3fb" height="400"> \

### 5. Soldering nRF52840 and start button

Here's the start button. I don't have it mounted, it just runs through one of the triangles :)
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/11c6739f-cf57-4291-bf4f-b78de9cf46ca" height="400"> \

Here are the cat5 conductors soldered on to the nRF52840: \
I would recommend soldering onto removable header pins to make troubleshooting easier. \
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/27014152-a74d-4e01-a4f3-471ca2c1562e" height="400"> \
It doesn't matter too much which pins you use (besides ground) as long as they're configured correctly in the software. \
I added a couple male jumper wires to the board's battery pads to connect to a 1s lipo cell, but it can also be powered via USB.

That's about it for the main build 🎉

## Software

The arduino sketch is built around Adafruit's Bluefruit library for their nRF52 feather board. While this isn't the exact board this project uses, the code still works just fine. HID support comes from the Adafruit TinyUSB Arduino library. \
The main thing you might have to change is buttonPins:

```
const int buttonPins[] = {0, 1, 2, 3, 4, 5, 6, 7};  // GPIO pin numbers for buttons
```
Just set these values to whatever pins you soldered the fret, strum, and start buttons to. The actual button asignments are calibrated in Clone Hero. \
You will probably have to add the Xiao nRF52840 board manually, in the arduino ide just go to Tools/Board/Boards Manager and search for Seeed nRF52 Boards. \
<img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f3bbe129-a014-478f-895f-5456b5cf95fa" height="400"> \
And there you have it! Once you've set the GPIO pins and selected the correct board and COM port you should be good to upload. \
Once everthing is up and running, you should be able to pair to your computer, assign the buttons in Clone Hero, and start jamming!


