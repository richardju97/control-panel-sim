# control-panel-sim
Various control panel simulations built with a Raspberry Pi along with various hardware. 

**Crosswalk**
C program integrated with hardware that simulates a pedestrian cross walk with LEDs and Buttons.
Shows both possible implementations with a RGB LED as well as separate Red and White LEDs. 
Compiler and Execution Information:
gcc -std=c99 -o crosswalk crosswalk.c -lwiringPi -lpthread
./crosswalk

Dependencies:
1. softPwm.h

