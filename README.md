# nRF52840-Clone-Hero-Controller

This is a custom BLE enabled clone hero (or other rythm game) controller built around a xiao nRF52840 board.

## Why did I build this?

I played Lego Rock Band on the wii as a kid, and recently discovered clone hero as an alternative that allows you to play custom songs, make your own charts, and can run on a potato. However, the cheap wii controllers I had were annoying to use with their membrane switches, chunky usb reciever, and unweildy size. This motivated me to build a custom guitar controller with mechanical switches, BLE for battery life, and a body of my own design.\
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2f9c97c7-0b10-4ef0-a7a2-86e5eb27651e" width="300"> \
Nostalgic, but improvable :)

## What's Clone Hero?

Clone hero is a rythm game similar to guitar hero or rock band. It's open source and can run on pretty much any computer.

  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2a291f2a-423a-485b-bcba-bcd4cbbe006e" width="300">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f56e9cb2-4ad9-4998-a978-c6972c8ca983" width="300">

You can configure almost any device to be used as an input, such as MIDI drums and keyboards, gamepads, or in my case a custom controller. 

  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/6b70ff5f-4da7-4c14-a0ab-9401a31274fe" width="150">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f2dd6d43-b17f-41fa-86e6-f3075d16ef4f" width="150">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/7e0d8432-29db-48b3-934f-368f25045a79" width="150">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/604cff66-c5ff-48bd-93a3-b08d6e27b55a" width="150">

## Why nRF52840?

I initially used an ESP32 for development and testing, but it ended up being too bulky and power hungry to run on the tiny lipo battery I wanted to use. This led me to choose the nRF52840 from Nordic Semiconductors. The nordic controller supports bluetooth low energy, it takes up about a quarter of the size, and sips power compared to an ESP32 even while transmitting (30mA vs 200+mA). It is a little more expensive, costing around $10 to the ESP32's $3, but the previously mentioned advantages make it worth the premium for me. \
<a href="https://www.seeedstudio.com/Seeed-XIAO-BLE-nRF52840-p-5201.html">nRF52840 I used</a> 

<a href="https://www.example.com/my%20great%20page](https://www.aliexpress.us/item/2251832863673404.html?spm=a2g0o.order_list.order_list_main.31.303b18028Ev81Z&gatewayAdapt=glo2usa">ESP32 I used</a>

## Body Design

To design the body, I traced an image of a stratocaster in Onshape, then after fixing some weird unruly spline points I was able to extrude it and add some triangular cutouts. It wasn't too difficult but it took a while to do by hand. The fretboard and headstock were designed the same way. \
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2ee516ed-50e7-47c2-9472-503d2a9701ef" width="400">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2ddec0f5-d8b1-416e-b938-4e5759a58ed5" width="400"> \

 Here's the tele I designed. \
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/081792e7-b3eb-40ea-a70b-b97aab385eb1" width="400"> 
\
\
The strum bar was a little tricky to dial in and it took a few revisions, but this is what I landed on. \
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/7685bd45-3a92-4fd1-b582-f79d3aa454d3" width="400"> 


## Parts

* 1 x Xiao nRF52840
* 7 x Low Profile Mechanical Switches (I used Gateron LP Reds) 
* Few feet of wire, I used cat5 cable I had laying around (6+ conductors)
* 14AWG Steel Wire or similar for strum bar axle
* 3D Printer / filament

