
#include "multiboot.h"

#include "VgaTerminal.h"

void kernel_main(void) {

    terminal_initialize();
    
    terminal_writestring("Welcome to Grove OS\n\n");

	terminal_writestring("    oxoxoo    ooxoo\n");
	terminal_writestring("  ooxoxo oo  oxoxooo\n");
	terminal_writestring(" oooo xxoxoo ooo ooox\n");
	terminal_writestring(" oxo o oxoxo  xoxxoxo\n");
	terminal_writestring("  oxo xooxoooo o ooo\n");
	terminal_writestring("    ooo\\oo\\  /o/o\n");
	terminal_writestring("        \\  \\/ /\n");
	terminal_writestring("         |   /\n");
	terminal_writestring("         |  |\n");
	terminal_writestring("         | D|\n");
	terminal_writestring("         |  |\n");
	terminal_writestring("         |  |\n");
	terminal_writestring("  ______/____\\____\n");


}