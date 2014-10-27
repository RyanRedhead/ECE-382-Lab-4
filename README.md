Lab-4
==================
#Purpose

To use C to create an etch a sketch program that utilizes assemply code.

#Hardware Schematic

It is the LCD screen on the MSP430.

#Debugging

There was not much for debugging in this Lab. The only errors I recieved were during the C code, where semicolons,commas, no commas mattered.

#Testing Methedology/Results

R14 was used as another input. Required functionality took R14 and tested whether it was a 1 or 0. If it was a 1 then the block became inverted and created a solid block.

B functionality was a simple C program that moved the block with a x and y velocity. When the block hit a wall the corresponding velocity was made negative. A delay loop within a delay loop was used to slow the block down.

##Required Functionality

The etch a sketch program works by moving the block around in an 8x8 and not clearing the previous move. The Aux button will change the block from clear to solid, thus making an etch a sketch feature.

#Observations/Conclusions

Registers are used as inputs for the assembly language. The external commands in C interacted with the assembly language, which could have been used/changed to get higher functionality and the bonus functionality.

Prelab-Check
Required Funct. -Check
B Funct -Check

Doc: Matt helped me figure out what value R13 needs to hold for required funct.


