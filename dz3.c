//Написать и отладить программу вычисления объема куба и
//площади его боковой поверхности по заданной длине ребра.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	float a,V,S;
	printf("Введите длину ребра куба\n");
	scanf("%f", &a);
	V = a*a*a;
	S = 4*a*a;
	printf("Объем куба равен %.2f\n", V);
	printf("Площадь боковой поверхности куба равен %.2f\n", S);
	return 0;
}