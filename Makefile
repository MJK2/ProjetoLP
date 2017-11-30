#Makefile for "programa" C++ application
#
#

PROG = programa

EXE = bin/
OBJ = build/
INC = headers/
SRC = src/

CC = g++
CPPFLAGS = -O0 -g -pedantic -std=c++11
OBJS = $(OBJ)main.o $(OBJ)video.o $(OBJ)filme.o $(OBJ)documentario.o $(OBJ)serie.o $(OBJ)controller.o $(OBJ)episodio.o 

build_bin: 
	mkdir build && mkdir bin && make $(EXE)$(PROG) || make $(EXE)$(PROG)


$(EXE)$(PROG): $(OBJS)
	 $(CC)  $(OBJS)  -o $@ 

$(OBJ)main.o: $(INC)controller.h 
	$(CC) $(CPPFLAGS) -c $(SRC)main.cpp  -o $@ 

$(OBJ)controller.o: $(INC)controller.h
	$(CC) $(CPPFLAGS) -c $(SRC)controller.cpp -o $@

$(OBJ)video.o: $(INC)video.h 
	$(CC) $(CPPFLAGS) -c $(SRC)video.cpp -o $@ 

$(OBJ)filme.o: $(INC)filme.h 
	$(CC) $(CPPFLAGS) -c $(SRC)filme.cpp -o $@ 

$(OBJ)documentario.o: $(INC)documentario.h 
	$(CC) $(CPPFLAGS) -c $(SRC)documentario.cpp -o $@

$(OBJ)serie.o: $(INC)serie.h 
	$(CC) $(CPPFLAGS) -c $(SRC)serie.cpp -o $@

$(OBJ)episodio.o: $(INC)serie.h 
	$(CC) $(CPPFLAGS) -c $(SRC)episodio.cpp -o $@


clean:
	rm -f  $(OBJS)  
	
