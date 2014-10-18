main: main.o cmd.o typelength.o
	clang main.o cmd.o typelength.o -o main

main.o: main.c cmd.h
	clang -c main.c

cmd.o: cmd.c typelength.h
	clang -c cmd.c

typelength.o: typelength.c
	clang -c typelength.c

clean:
	@echo "clean project"
	rm main *.o
	@echo "clean completed"
