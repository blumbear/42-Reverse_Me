#include <string.h>
#include <stdio.h>

void no() {
	exit();
}

int main() {
	char buff[25];
	char *res;

	printf("Please enter key: ");
	int tmp = scanf("%23s", buff);
	if (tmp != 1)
		no();
	if (buff[1] != '0')
		no();
	if (buff[0] != '0')
		no();

	memset(res, 0, 9);
	res[0] = 'd';
	for (int i = 0; buff[i]; i+=3) {
		
	}
	
	return (0);
}