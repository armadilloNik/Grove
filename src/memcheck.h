
/*

typedef struct multiboot_memory_map {
	unsigned int size;
	unsigned int base_addr_low,base_addr_high;
	unsigned int length_low,length_high;
	unsigned int type;
} multiboot_memory_map_t;

void kernel_main(multiboot_info_t* mbt) {

multiboot_memory_map_t* mmap = mbt->mmap_addr;
    
    char aux[10];// = "hello ";
	//aux = "This is Grove OS\nWelcome to the Stedding\nMemSize: %u";
	
    aux[0] = '1';
    aux[1] = '2';

    terminal_initialize();

    terminal_writestring("Checking the memMap\n");
	while(mmap < mbt->mmap_addr + mbt->mmap_length) {
		
		mmap = (multiboot_memory_map_t*) ( (unsigned int)mmap + mmap->size + sizeof(mmap->size) );
		
		//totalSize += mmap->size;
	}

	/* Initialize terminal interface */
	
 
	/* Newline support is left as an exercise. */
	terminal_writestring("memSize\n");
	terminal_writestring(aux);
}

*/