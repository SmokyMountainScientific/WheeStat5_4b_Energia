WheeStat5_4b_Energia
====================
Wow.  Having a hard time figuring out GitHub.

Anyway, this repository contains the Energia code for the WheeStat5.4.2 potentiostat.  This is a three electrode potentiostat for measuring electrochemical reactions at electrodes in solution.  The potentiostat is appropriate for education and environmental monitoring.  Directions for using the potentiostat are available at http://publiclab.org/wiki/wheestat-user-s-manual.  A number of other resources are available from the PublicLab website by following the links from the above site.

The WheeStat is comprised of hardware, Energia code for the Tiva LaunchPad microcontroller, and a GUI that was written using Processing. The files in this repository are Energia files that are used to program the microcontroller. While earlier WheeStat hardware should be compatible with the code herin, the microcontroller softare will only be compatible with gui software WheeStat5.4.2 or later.   

The microcontroller is programmed using the Energia IDE, which is downloaded from Energia.nu.  To get the program to compile, you will need the altSPI library files that are available from https://github.com/SmokyMountainScientific.  The files need to be in a folder named altSPI, inside a folder called "libraries", which is in your sketchbook folder.  
The GUI is availabe from https://github.com/SmokyMountainScientific/WheeStat5_4_2.  
