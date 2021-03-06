#Makefile for "programa" C++ application
#
#

PROG = programa

OBJ = build/
INC = headers/
SRC = src/

CC = g++
CPPFLAGS = -O0 -g -pedantic -std=c++11
OBJS = $(OBJ)main.o $(OBJ)video.o $(OBJ)filme.o $(OBJ)documentario.o $(OBJ)controller.o

build_bin: 
	mkdir build && make $(EXE)$(PROG) || make $(EXE)$(PROG)


$(PROG): $(OBJS)
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


clean:
	rm -f  $(OBJS)  
	
cleanall:
	rm -f $(OBJS) $(PROG)
