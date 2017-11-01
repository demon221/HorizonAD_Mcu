***Horizon Robotics Inc.***

## ** MCU WORKSPACE for Horizon AD **

## ** Sturcture **
- asw:    Upper layer SW components, includes application, can, common, control, hmi, monitor.
- boot:   Mcu startup and link file. 
- bsw:    Lower layer SW components, includes Autosar OS, rte, com, iohal, mem, sys, cdd and other non-Autosar components.
- docs:   Documents description for SW architecture, modules, testing, example templates.
- mcal:   Micro controller abstract layer, provided by third-party Mcu supplier.
- tools:  Compiling scripts, debugging workspace, testing tools.
- utils:  Utilities for common usage, math functions, lookup table, etc.
 
 
 --------------------------------------
 ## How to use:
 Now it is just the folder structure for MCU workspace.
 Final project files will be defined due to compiler and autosar toolchain.
 ASW developers could firstly use templates in ''/docs'' folder for source writing and file management.