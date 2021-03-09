#include<stdio.h>
#include<conio.h>
#include"stack.h"
int main()
{
	init(4);
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	pop();
	pop();
	pop();
	pop();

	print();
	return 0;
}