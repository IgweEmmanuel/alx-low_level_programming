#include <stdio.h>

/**
 * main - This prints the argument names in the compiler
 *
 * Return: outputs ints
 */ 
int main (int argc, char *argv[]){
	if(argc == 1){
	printf("argc[%d]\n argv[%s]\n", argc, argv[0]);
	}
	return 0;
}
