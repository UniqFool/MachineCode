// chapter02.03_ptrptr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <malloc.h>

void allocateInt(int ** i)
{
	int * pi = (int *)malloc(sizeof(int));
	*pi = 3;
	*i = pi;
}

void main()
{
	int * i;
	allocateInt(&i);
	printf("%d\n", *i);
	getchar();
}

