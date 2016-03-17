mygrep: mygrep.o lookinFile.o
	gcc -o mygrep mygrep.o lookinFile.o
mygrep.o: mygrep.c lookinFile.h
	gcc -c mygrep.c
lookinFile.o: lookinFile.c lookinFile.h
	gcc -c lookinFile.c
clean:
	rm *.o
	rm mygrep
