//
//  main.c
//  C10_квадратные_уравнения
//
//  Created by BassmanOff on 22.07.2020.
//  Copyright c 2020 BassmanOff. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Math1(void);
void Math2(int a, int b, int c, int d);
void sys_clear(void);

int main()
{
	sys_clear();
	puts("Что вы хотите сделать?\n");
	puts("1) Вычислить корень квадратного уравнения");
	puts("2) Выйти из программы\n");
	
	
	
	char userCh;
	userCh = getchar();					// Получение ответа от пользователя
	
	while (userCh == '1'){
		Math1();
		
		while (userCh != '\n') {			// Сброс буфера getchar
			userCh = getchar();}

		puts("Хотите решить ещё одно уравнение ?");
		puts("1) Да\n2) Нет");
		userCh = getchar();}
}


void sys_clear(void){				// Очистка терминала
	system("cls");
	puts("Решение квадратных уравнений Windows x64 Edition");
	puts("________________________________________________\n");
}



void Math1(void){					// Первая часть программы
	
	int a, b, c;
	
	sys_clear();
	puts("Введите уравнение\n");
	puts("aX^2 + bX + c = 0");
	puts("^\n");
	printf("a = ");
	scanf("%d", &a);				// Ожидаем ввода "a"
	
	sys_clear();
	puts("Введите уравнение\n");
	puts("aX^2 + bX + c = 0");
	puts("       ^\n");
	printf("a = %d | b = ", a);
	scanf("%d", &b);				// Ожидаем ввода "b"
	
	sys_clear();
	puts("Введите уравнение\n");
	puts("aX^2 + bX + c = 0");
	puts("            ^\n");
	printf("a = %d | b = %d | c = ", a, b);
	scanf("%d", &c);				// Ожидаем ввода "c"
	
	sys_clear();
	puts("Введённое уравнение:\n");
	printf("%dX^2 + %dX + %d = 0\n", a, b, c);
	
	int d = ((b * b) - 4 * (a * c));
	printf("\nD = b^2 - 4ac =\n%d - 4 * %d =\n%d - %d = %d\n\n", b * b, a * c, b * b, a * c * 4, d);
	if (d > 0){
		Math2(a, b, c, d);
	}
	else {puts("Ошибочное значение дискриминанта\n");}
}



void Math2(int a, int b, int c, int d){		// Вторая часть программы
	float rad_d = sqrt(d);					// Вычисляем корень из дискриминанта
	printf("√%d = %.0f\n\n", d, rad_d);
	
	float X1, X2;
	
	puts("X = -b +- √D");
	puts("    ________");
	puts("       2a\n");
	printf("X1 = (-%d + %.0f) ? (2 * %d) = ", b, rad_d, a);
	X1 = ((-b + rad_d) / (2 * a));			// Находим X1
	printf("%f\n", X1);
	
	printf("X1 = (-%d - %.0f) ? (2 * %d) = ", b, rad_d, a);
	X2 = ((-b - rad_d) / (2 * a));			// Находим X2
	printf("%f\n\n", X2);
}