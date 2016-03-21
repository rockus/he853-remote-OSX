# About

The he853-remote.OSX project provides a CLI application for the 
[HomeEasy HE853 433.92MHz USB RF remote control sender](http://www.elro.eu/en/produkte/cat/home-automation/home-easy-next/sender2/fernbedienbarer-pc-usb-dongle).
The sender is used for toggling RF controlled power sockets.

# Source and Original Work

This code is based on work from
[rinie](https://github.com/rinie) and [r10r](https://github.com/r10r).

Initially, code had been extracted from [roseasy](http://wiki.ros.org/roseasy),
which is a part of the [ROS (Robot Operating System)](http://wiki.ros.org/) project.

Another project that provides a C# Windows SDK for the dongle is
the [HE853 Control Project](http://he853control.sourceforge.net/).

# Build

This version is not reliant on libusb anymore, but rather uses hidapi together with the OSX USB backends.
Therefore, first clone hidapi:

  git clone http://github.com/signal11/hidapi

Copy the following files from the hidapi (sub-)directories into this directory here:

  hidapi/hidapi.h
  mac/hid.c

You can then build the CLI application by simply running

  make
 
## Usage

You do not have to be root to execute the program.

  ./he853 <deviceId> <command>

The command is either a *0* for *OFF* or anything > 0 for *ON*.
To program the power socket you have to place the power socket into learning 
mode and send the *ON* command to it:

  ./he853 2001 1

After that you can use the deviceId *2001* for toggling the power socket.

# Requirements

* [hidapi](https://github.com/signal11/hidapi)
* **no** libusb

# Known Issues

* ~~doesn't~~ compile**s** on OSX
