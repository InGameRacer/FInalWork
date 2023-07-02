#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main() {
	char e;
	char n1 [50];
	int nu1;
	int nu2;
	double nu3;
	double nu4;
	unsigned int nu5;


	scanf("%c", &e);
	fflush(stdin);
	gets(n1);
	scanf("%d", &nu1);
	scanf("%d", &nu2);
	scanf("%lf", &nu3);
    scanf("%lf", &nu4);
    scanf("%u", &nu5);
	printf("%c, %d\n", e, e);
	printf("My name is %s %d\n", n1, strlen(n1));
	printf("%d, [%8x], %[-8x}, %x,\n", nu1, nu1, nu1, nu1 );
	printf("%d, [%10x], [%-10x], %x,\n", nu2, nu2, nu2, nu2 );
	printf("%.3lf, %.3e\n", nu3, nu3);
    printf("%.3lf, %.3e\n", nu4, nu4);
    printf("%u, %o, %x", nu5, nu5, nu5);
	
	float k;//Положительное число с плвающей точкой
	float t;//Отрицательное число с плавающей точкой 

	if (k > 0) {//Проверка на положительность первого числа
		printf("Число %f положительное", k);
	}


	getchar();
	getchar();

	return 0;
}