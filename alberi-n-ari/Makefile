OBJ = main.o nodo.o tipo.o

Web-list: $(OBJ)
	g++ -o Web-list $(OBJ)

main.o: tipo.h nodo.h

nodo.o: nodo.h tipo.h

tipo.o: tipo.h

.PHONY: clean cleanall
clean:
	rm -f *.o
cleanall:
	rm -f Web-list *.o