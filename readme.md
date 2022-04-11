# My keymap for the CRKBD

Based on the mechboards r2g and [mattsennas](https://github.com/Mattsenna/QMK_corne) keymap.

## Setup

First clone the qmk firmware repo:
```sh
git clone git@github.com:qmk/qmk_firmware.git
```

And follow the setup instructions on [docs.qmk.fm](https://docs.qmk.fm/#/newbs) or read up on QMK in general at [qmk.fm](https://qmk.fm/)

Then go into the root directory of the qmk firmware (whereever you just cloned it to) and clone this repo into `/keyboards/crkbd/keymaps/noinfo`:
```sh
git clone git@github.com:noinfo/QMK_corne.git /keyboards/crkbd/keymaps/noinfo
```


## Building

In the root directory of the qmk firmware do:

```sh
qmk compile -kb crkbd/r2g -km noinfo
```

## Flashing

In the root directory of the qmk firmware do:

```sh
qmk flash -kb crkbd/r2g -km noinfo
```
