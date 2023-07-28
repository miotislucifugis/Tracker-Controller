# Tracker-Controller
An Arduino Pro Micro-based USB gamepad code and pcb layout with mechanical key switches. Inspired by the layout and dimensions of the Dirtywave M8 tracker; suitable for M8 headless use, as well as other trackers that uses the NES-style layout, like LSDJ.
Emmulates either joystick or keyboard commands.  Multiple alternate keymapping modes available, configured by holding a key during start up.  
Requires the Arduino Keyboard Library and Joystick library.

![IMG_6134(1)](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/0dc0f280-fe52-4ae3-ab38-853d563f7c10)


# PCB materials:
8x (Cherry MX compatable or Kaihl Choc- choose the appropriate layout) mechanical switches of your choice, Arduino Pro Micro, and 2x 12 pos sockets or pin headers.
Additionally you may want to add a bottom plate w/ standoffs and necessary hardware.  Drill Holes for the standoffs are unmarked, but I found that a  3-3.5mm hole inset 3.25mm from each edge worked well.
Switch hole dimensions are: 0.157" = 4mm  0.059" = 1.5mm  0.039" = 1mm  (if it is too tight of a fit, add .2-.5mm to each. Its good to center punch/mark these exactly before drilling to make sure all are in perfect alignment.)

Layout is single sided and suitable for home etching.   Uses either smd sockets or thru-hole sockets/pins for mounting the arduino.
All the unused pins are 'broken out'in the pads along the edge and the 4 pads under the pro micro with VCC, GND, RX and TX ...for experimentation/modifications.  
(print at 50%)

![Tracker controller_proMicro_MX](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/324c1790-2492-4d3d-977f-cadcbaea3774)
![Tracker controller_proMicro_choc](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/f63ea8d0-726e-4a1b-aedf-8a965da57748)


![IMG_6123](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/a0326274-4fb9-4cc9-b157-71b3bacb663b)
![IMG_6124](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/db13a791-ddb8-406f-817d-024961ffe604)
![IMG_6125](https://github.com/miotislucifugis/Tracker-Controller/assets/20709580/2bb1b637-6040-4129-86ab-8fb88a3f6288)

