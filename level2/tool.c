#include <stdio.h>

int main(int ac, char **av){
	if (ac != 2)
		return (printf("Nope.\n"));
	for (int i = 0; av[1][i]; i++)
		printf("%03d", av[1][i]);
	printf("\n");
}