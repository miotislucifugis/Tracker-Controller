# Tracker-Controller
An Arduino Pro Micro-based gamepad code and pcb layout with mechanical key switches. Inspired by the design and dimensions of the Dirtywave M8 tracker; suitable for m8 headless use as well as other trackers that uses the NES-style layout, like LSDJ.
Emmulates either joystick or keyboard commands.  Multiple alternate keymapping modes available, configured by holding a key during start up.  
Requires the Arduino Keyboard Library and Joystick library.

# PCB materials:
8x mechanical switches of your choice, Arduino Pro Micro, and 2x 12 pos sockets or pin headers.
Additionally you may want to add a bottom plate w/ standoffs and necessary hardware.  Drill Holes for the standoffs are unmarked, but I found that a  3.25mm hole inset 3-3.5mm from each edge worked well.

Layout is single sided and suitable for home etching.   Uses either smd sockets or thru-hole sockets/pins for mounting the arduino.
All the unused pins are 'broken out'in the pads along the edge and the 4 pads under the pro micro with VCC, GND, RX and TX ...for experimentation/modifications.  
(print at 50%)
![M8Controller](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/824c516a-1140-4270-9e31-48e3c63163a6)
