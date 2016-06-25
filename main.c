#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

int main(int argc, char** argv) {

	Game* game = Game_init();

	while (!Game_done(game)) {
		Game_step(game);
	}
		
	return 0;

}
