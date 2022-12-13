// Simple program to add 2 numbers using inline assembly in C.

#include <stdio.h>

int sum(int i, int j);

int main(){
	int i = 1;
	int j = 2;
	int total = sum(i, j);
	printf("%d\n", total);
}

asm(
	"sum:;"
	"	pushq %rbp;"
	"	movq %rsp, %rbp;"
	"	addq %rdi, %rsi;"
	"	movq %rsi, %rax;"
	"	movq %rbp, %rsp;"
	"	popq %rbp;"
	"	ret;"
		);
