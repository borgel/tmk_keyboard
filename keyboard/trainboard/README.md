Trainboard keyboard firmware
============================

* This README not yet updated to match reality. *

## GH60 Resources
- [KOMAR's project page](http://blog.komar.be/projects/gh60-programmable-keyboard/)
- [Prototyping](http://geekhack.org/index.php?topic=34959.0)
- [Rev.A PCB test](http://geekhack.org/index.php?topic=37570.0)
- [Rev.B PCB test](http://geekhack.org/index.php?topic=50685.0)
- [Group buy](http://geekhack.org/index.php?topic=41464.0)


## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[poker|poker_set|poker_bit|plain|hasu|spacefn|hhkb|<name>]


### 5. HHKB
[keymap_hhkb.c](keymap_hhkb.c) emulates original HHKB layers.
#### 5.0: Default layer
    ,-----------------------------------------------------------.
    |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
    |-----------------------------------------------------------|
    |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
    |-----------------------------------------------------------|
    |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Return  |
    |-----------------------------------------------------------|
    |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn |
    |-----------------------------------------------------------|
    |    |Gui |Alt |      Space             |    |Alt |Gui |    |
    `-----------------------------------------------------------'
#### 5.1: HHKB Fn layer
    ,-----------------------------------------------------------.
    |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
    |-----------------------------------------------------------|
    |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
    |-----------------------------------------------------------|
    |      |VoD|VoU|Mut|Ejc|   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
    |-----------------------------------------------------------|
    |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
    |-----------------------------------------------------------|
    |    |    |    |                        |    |    |    |    |
    `-----------------------------------------------------------'

## Resources
[1] http://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html
[2] http://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html#p141386

