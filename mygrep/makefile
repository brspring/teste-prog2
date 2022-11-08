parametrosCompilacao=-Wall -std=c99                                                                                                                                                                                                      
nomePrograma=mygrep

all: $(nomePrograma)

$(nomePrograma): mygrep.o
	gcc -o mygrep mygrep.o $(parametrosCompilacao)

.o: .c
	gcc -c *.c $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)

purge: clean 
	-rm -f mygrep
