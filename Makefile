CC = gcc

OBJECTS=signals.o
SOURCES=signals.c

signals: $(SOURCES)
	$(CC) $(SOURCES) -o signals

clean:
	$(RM) *.o signals