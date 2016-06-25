CC = gcc
CF = -std=c11
OBJS = main.o game.o player.o

game.exe: $(OBJS)
	$(CC) $(CF) $(OBJS) -o main.exe
	rm -Rf *.o

main.o:
	$(CC) $(CF) main.c -o main.o -c
	
game.o:
	$(CC) $(CF) game.c -o game.o -c

player.o:
	$(CC) $(CF) player.c -o player.o -c

clean:
	rm -Rf *.o
