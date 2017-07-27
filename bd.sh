
#!/bin/sh

mkdir -p build

export PREFIX="$HOME/opt/cross"
export TARGET=i686-elf
export PATH="$PREFIX/bin:$PATH"

nasm -felf32 src/boot.asm -o build/boot.o

i686-elf-gcc -c src/kernel.c -o build/kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

i686-elf-gcc -T src/linker.ld -o build/grove.bin -ffreestanding -O2 -nostdlib build/boot.o build/kernel.o -lgcc

mkdir -p build/isodir/boot/grub
cp build/grove.bin build/isodir/boot/grove.bin
cp src/grub.cfg build/isodir/boot/grub/grub.cfg
grub-mkrescue -o build/grove.iso build/isodir