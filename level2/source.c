#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void no() {
	puts("Nope.");
	exit(1);
}

void ok() {
	puts("Good job.");
}

int main() {
	char buff[24];
	char res[9];
	int j = 0;

	printf("Please enter key: ");
	int tmp = scanf("%23s", buff);
	if (tmp != 1)
		no();
	if (buff[1] != '0')
		no();
	if (buff[0] != '0')
		no();

	//fflush()
	memset(res, 0, 9);
	res[j++] = 'd';
	for (int i = 2; buff[i]; i+=3) {
		tmp = strlen(res);
		if (tmp >= 8)
			break;
		/*
			0x565563cc <+252>:	mov    ebx,DWORD PTR [ebp-0x40]
			0x565563cf <+255>:	mov    eax,DWORD PTR [ebp-0x14]
			0x565563d2 <+258>:	mov    DWORD PTR [ebp-0x48],eax
			0x565563d5 <+261>:	lea    ecx,[ebp-0x35]
			0x565563d8 <+264>:	mov    eax,esp
			0x565563da <+266>:	mov    DWORD PTR [eax],ecx
			0x565563dc <+268>:	call   0x565560a0 <strlen@plt>
				0x565563e1 <+273>:	mov    ecx,eax
				0x565563e3 <+275>:	mov    eax,DWORD PTR [ebp-0x48]
				0x565563e6 <+278>:	cmp    eax,ecx
				0x565563e8 <+280>:	setb   al
			0x565563eb <+283>:	mov    BYTE PTR [ebp-0x41],al
			0x565563ee <+286>:	mov    al,BYTE PTR [ebp-0x41]
			0x565563f1 <+289>:	test   al,0x1
			0x565563f3 <+291>:	jne    0x565563fe <main+302>
			0x565563f9 <+297>:	jmp    0x5655644a <main+378>
		*/
		char temp[4] = "";
		temp[0] = buff[i];
		temp[1] = buff[i + 1];
		temp[2] = buff[i + 2];
		temp[3] = 0;
		tmp = atoi(temp);
		res[j++] = tmp;
	}
	if (strcmp(res, "delabere") != 0)
		no();
	ok();
	return (0);
}