OBJ = main.o nodo.o tipo.o coda-bfs.o

Alberi-n: $(OBJ)
	g++ -o Alberi-n $(OBJ)

main.o: tipo.h coda-bfs.h nodo.h

coda-bst.o: tipo.h coda-bfs.h nodo.h

nodo.o: tipo.h nodo.h

tipo.o: tipo.h

.PHONY: clean cleanall
clean:
	rm -f *.o
cleanall:
	rm -f Web-list *.o