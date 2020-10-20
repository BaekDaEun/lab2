calculator : calculations.o ./lib/add.o ./lib/sub.o ./lib/mul.o ./lib/div.o
	gcc -o calculator calculations.o ./lib/add.o ./lib/sub.o ./lib/mul.o ./lib/div.o
	ar rcs ./lib/libmake.a ./lib/add.o ./lib/sub.o ./lib/mul.o ./lib/div.o
	gcc -o ./lib/lqmake -L./lib calculations.c -lmake
calculations.o : calculations.c
	gcc -c calculations.c
add.o : ./lib/add.c
	gcc -c ./lib/add.c
sub.o : ./lib/sub.c
	gcc -c ./lib/sub.c
mul.o : ./lib/mul.c
	gcc -c ./lib/mul.c
div.o : ./lib/div.c
	gcc -c ./lib/div.c
clean :
	rm -f calculator calculations.o ./lib/add.o ./lib/sub.o ./lib/mul.o ./lib/div.o
