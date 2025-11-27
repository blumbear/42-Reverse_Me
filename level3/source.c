#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ___syscall_malloc() {
	puts("Nope.");
	exit(1);
}

void ____syscall_malloc() {
	puts("Good job.");
}

int main() {
	char buff[24];
	char res[9];
	int j = 0;

	printf("Please enter key: ");
	int tmp = scanf("%23s", buff);
	if (tmp != 1)
		___syscall_malloc();
	if (buff[1] != '2')
		___syscall_malloc();
	if (buff[0] != '4')
		___syscall_malloc();
	
	/*
		0x000055555555537b <+91>:	movsx  ecx,BYTE PTR [rbp-0x40]
		0x000055555555537f <+95>:	mov    eax,0x34
		0x0000555555555384 <+100>:	cmp    eax,ecx
		0x0000555555555386 <+102>:	je     0x555555555391 <main+113>
		0x000055555555538c <+108>:	call   0x5555555552e0 <___syscall_malloc>
		0x0000555555555391 <+113>:	mov    rax,QWORD PTR [rip+0x2c48]        # 0x555555557fe0
		0x0000555555555398 <+120>:	mov    rdi,QWORD PTR [rax]
		0x000055555555539b <+123>:	call   0x555555555080 <fflush@plt>
	*/
	memset(res, 0, 9);
	res[j++] = 42;
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
	if (strcmp(res, "********") != 0)
		___syscall_malloc();
	____syscall_malloc();
	return (0);
}