# libjokertv project

User-level driver for Joker TV card (https://tv.jokersys.com) using libusb.
Supported platforms: Linux, Mac OSx (more platforms coming soon ... )

'linux' folder contains stripped Linux kernel header and Linux media subsystem
drivers (cxd2841er, helene, etc).

(c) Abylay Ospan <aospan@jokersys.com>, 2017
https://jokersys.com
LICENSE: GPLv2

# Compilation
```
mkdir build
cd build
cmake ../
make
```

# Run
```
./joker-tv
```

if everything is fine then you can see progress. Something like this:
```
usb device found
Sony HELENE Ter attached on addr=61 at I2C adapter 0x7fff5f915d78
TUNE done
WAITING LOCK. status=0 error=Undefined error: 0 
USB ISOC: all/complete=7999.868002/2381.460706 transfer/sec 18.586992 mbits/sec 
USB ISOC: all/complete=8000.020000/2369.505924 transfer/sec 18.493687 mbits/sec
...
```

resulting TS stream should apear in ./out.ts file.

## I2C bus scan
```
./i2c-scan
```
