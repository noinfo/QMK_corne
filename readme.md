# My keymap for the CRKBD

Based on the mechboards r2g and mattsennas keymap.

## Setup

First clone the qmk firmware repo:
```sh
git clone git@github.com:qmk/qmk_firmware.git
```

Then clone this repo into `/keyboards/crkbd/keymaps/noinfo`:
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
