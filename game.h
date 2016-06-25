#ifndef GAME_H
#define GAME_H

#ifdef _WIN32
#define CLEARSCREEN "cls"
#else
#define CLEARSCREEN "clear"
#endif

typedef struct Game Game;

struct Game {

	int meme;	

};

static const char* GAME_NAME = "__PLACEHOLDER__";

Game*	Game_init();
int		Game_done(Game*);
void	Game_step(Game*);

#endif
