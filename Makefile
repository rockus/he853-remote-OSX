LIBS = -lstdc++ -framework IOKIT -framework CoreFoundation
CC = gcc

SOURCE = main.cpp he853.cpp hid.c
EXEC = he853

all:
	$(CC) $(SOURCE) $(LIBS) -o $(EXEC) -Wall

clean:
	rm -rf *.o *~ $(EXEC) 
