GCC = g++-12
CFLAGS = -Wall

MAIN = main.cpp
OBJ_MAIN = obj/main.o

HDS_PATH = ./hds/

SRC_TIME = src/Time_Ponto.cpp
OBJ_TIME = obj/Time_Ponto.o

OUT = Ponto.out

all: compile clean execute

compile:
	@mkdir obj
	$(GCC) $(CFLAGS) -I $(HDS_PATH) -c $(SRC_TIME) -o $(OBJ_TIME)
	$(GCC) $(CFLAGS) -I $(HDS_PATH) -c $(MAIN) -o $(OBJ_MAIN)
	$(GCC) $(CFLAGS) $(OBJ_MAIN) $(OBJ_TIME) -o $(OUT)

execute:
	@clear
	@./$(OUT)

clean:
	@rm obj/main.o

