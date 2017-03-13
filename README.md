## control-panel-sim
Various control panel simulations built with a Raspberry Pi along with various hardware. 

#Hardware Information
![**GPIO Pin Numbering**](http://pi4j.com/images/j8header-3b-large.png)
[More Information](http://pi4j.com/pins/model-3b-rev1.html)

#Crosswalk
C program integrated with hardware that simulates a pedestrian cross walk with LEDs and Buttons.

Shows both possible implementations with a RGB LED as well as separate Red and White LEDs. 

**Compiler and Execution Information:**
'''bash
gcc -std=c99 -o crosswalk crosswalk.c -lwiringPi -lpthread
./crosswalk
'''
**Dependencies:**
1. softPwm.h

