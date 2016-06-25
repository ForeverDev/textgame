#include <stdio.h>
#include <stdlib.h>
#include "game.h"

Game*
Game_init() {
	Game* G = malloc(sizeof(Game));
	
	system(CLEARSCREEN);
	printf("Welcome to %s! Which memory slot would you like to use?\n", GAME_NAME);

	char filename[] = "saves/slot\0.txt\0";

	for (int i = 0; i < 4; i++) {
		FILE* handle;
		unsigned long long flen;
		filename[10] = '0' + i;
		handle = fopen(filename, "r");
		if (!handle) {
			continue;
		}
		fseek(handle, 0, SEEK_END);
		flen = ftell(handle);
		fseek(handle, 0, SEEK_SET);
		fclose(handle);
		printf("%d: Slot %02d (%d bytes)\n", i, i, flen);	
	}

	unsigned int selection;
	printf("I'd like to load slot ");
	scanf("%u", &selection);
	if (selection > 3) {
		printf("\nInvalid slot number, aborting\n");
		exit(1);
	}
	filename[10] = '0' + selection;
	printf("\nSlot %02d has been loaded!\n", selection);

	return G;
}

int
Game_done(Game* G) {
	return 0;
}

void
Game_step(Game* G) {

}


