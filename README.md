# Arduino Motion Sensor \& Light Project

# 

# Overview

# 

# This is a project that uses an Arduino board to create a smart light. The light automatically turns on when it detects either low light or motion in the area.





# Components Used

# 

# \* Arduino Board

# \* LED

# \* 1x 220-ohm Resistor

# \* Light-Dependent Resistor (LDR)

# \* Passive Infrared (PIR) Motion Sensor

# \* Breadboard

# \* Jumper wires

# 

# 

# \* LED: Connect the anode to digital pin 9. Connect the cathode  to ground via the 220-ohm resistor.

# \* PIR Sensor: VCC pin to 5V, GND pin to GND, and OUT pin to digital pin 2.

# \* LDR: Connect one leg to 5V. Connect the other leg to analog pin A0 and use a 10k-ohm resistor from A0 to GND.

# 

# Code Explanation

# 

# The code looks at two conditions to decide when to turn on the LED. A threshold variable is used to define what "low light" is. The LED turns on if either condition is met.

# 

