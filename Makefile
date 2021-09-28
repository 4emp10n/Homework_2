CC = g++

SOURCES = main.cpp Student.cpp

all:
	$(CC) $(SOURCES) -o main

run:
	@./main

clean:
	@rm -rf *.o main