OBJ = main.o grafi.o tipo.o codabfs.o

Grafi: $(OBJ)
	g++ -o inverted-index $(OBJ)

main.o: grafi.h tipo.h codabfs.h

codabfs.o: codabfs.h

grafi.o: tipo.h grafi.h 

tipo.o: tipo.h

.PHONY: clean cleanall
clean:
	rm -f *.o
cleanall:
	rm -f Web-list *.o