@set PATH=C:\msys64\usr\bin;%PATH%
@set MDK=c:/Attila/Test/mdk
@set ARCH=esp32

make -C examples/blinky clean build
