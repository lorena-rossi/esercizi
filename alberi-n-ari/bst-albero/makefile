OBJ = main.o bst.o tipo.o

Web-list: $(OBJ)
	g++ -o Web-list $(OBJ)

main.o: tipo.h bst.h

bst.o: bst.h tipo.h

tipo.o: tipo.h

.PHONY: clean cleanall
clean:
	rm -f *.o
cleanall:
	rm -f Web-list *.o