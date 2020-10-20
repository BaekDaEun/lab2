calc_exe : add.o sub.o mul.o div.o calculations.o
	gcc -o calc_exe add.o sub.o mul.o div.o calculations.o
add.o : add.h add.c
	gcc -g -c add.h add.c
sub.o : sub.h sub.c
	gcc -g -c sub.h sub.c
mul.o : mul.h mul.c
	gcc -g -c mul.h mul.c
div.o : div.h div.c
	gcc -g -c div.h div.c
calculations.o : calculations.c
	gcc -g -c calculations.c
clean :
	rm -f calc_exe add.o sub.o mul.o div.o calculations.o
