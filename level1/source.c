#include <string.h>
#include <stdio.h>

int main() {
	char res[100];

	printf("Please enter key: ");
	scanf("%s", res);
	if (strcmp("__stack_check", res) == 0)
		printf("Good job.\n");
	else
		printf("Nope.\n");
	return (0);
}