CC=g++
DEPS = Deck.h Player.h Card.h
OBJ = main.o Deck.o Player.o Card.o
EXEC = roba-paquetes

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

pack:
	tar cvzf $(EXEC).tgz $(DEPS) *.cpp Makefile
