OBJ = main.o bst.o tipo.o

Alberi-binari: $(OBJ)
	g++ -o Web-list $(OBJ)

main.o: tipo.h bst.h

bst.o: tipo.h bst.h

tipo.o: tipo.h

.PHONY: clean cleanall
clean:
	rm -f *.o
cleanall:
	rm -f Web-list *.o