# nRF52840-Clone-Hero-Controller
This is a custom BLE enabled clone hero (or other rythm game) controller built around a xiao nRF52840 board.
## Why did I build this?
I played Lego Rock Band on the wii as a kid, and recently discovered clone hero as an alternative that allows you to play custom songs, make your own charts, and can run on a potato. However, the cheap wii controllers I had were annoying to use with their membrane switches, chunky usb reciever, and unweildy size. This motivated me to build a custom guitar controller with mechanical switches, BLE for battery life, and a body of my own design.
## Project Description
Clone hero is a rythm game similar to guitar hero or rock band. It's open source and can run on pretty much any computer.
<p>
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/2a291f2a-423a-485b-bcba-bcd4cbbe006e" width="300">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f56e9cb2-4ad9-4998-a978-c6972c8ca983" width="300">
</p>
You can configure almost any device to be used as an input, such as MIDI drums and keyboards, gamepads, or in my case a custom controller. 
<p>
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/6b70ff5f-4da7-4c14-a0ab-9401a31274fe" width="150">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/f2dd6d43-b17f-41fa-86e6-f3075d16ef4f" width="150">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/7e0d8432-29db-48b3-934f-368f25045a79" width="150">
  <img src="https://github.com/pyroinventor/nRF52840-Clone-Hero-Controller/assets/77114423/604cff66-c5ff-48bd-93a3-b08d6e27b55a" width="150">
</p>
## Why nRF52840?
I initially used an ESP32 for development and testing, but it ended up being too bulky and power hungry to run on the tiny lipo battery I wanted to use. This led me to choose the nRF52840 from Nordic Semiconductors. The nordic controller supports bluetooth low energy, it takes up about a quarter of the size, and sips power compared to an ESP32 (30mA vs 200+mA). It is a little more expensive, costing around $10 to the ESP32's $3, but the previously mentioned advantages make it worth the premium for me.   


