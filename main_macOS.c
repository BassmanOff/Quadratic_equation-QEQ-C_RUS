//
//  main.c
//  C10_квадратные_уравнения
//
//  Created by Андрей on 21.07.2020.
//  Copyright © 2020 Андрей. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Math1(void);
int Math2(int a, int b, int c, int d);
int sys_clear(void);

int main(){
	sys_clear();
	puts("Что вы хотите сделать?\n");
	puts("1) Вычислить корень квадратного уравнения");
	puts("2) Выйти из программы\n");
	
	char userCh = getchar(); 		// Получение ответа от пользователя
	getchar();						// Сброс буфера с символом "\n"
	if (userCh == '1'){				// Если выбрано 1, то выполняется алгоритм
		Math1();
	}
	
	//system("clear");				// Очистка терминала и выход
	exit(228);
}


int sys_clear(void){				// Очистка терминала
	system("clear");
	puts("Решение квадратных уравнений macOS x64 Edition");
	puts("______________________________________________\n");
	return 0;
}



int Math1(void){					// Первая часть программы
	
	int a, b, c;
	
	sys_clear();
	puts("Введите уравнение\n");
	puts("aX^2 + bX + c = 0");
	puts("^\n");
	scanf("%d", &a);				// Вводим переменную "a"
	
	sys_clear();
	puts("Введите уравнение\n");
	printf("aX^2 + bX + c = 0 | a = %d\n", a);
	puts("       ^\n");
	scanf("%d", &b);				// Вводим переменную "b"
	
	sys_clear();
	puts("Введите уравнение\n");
	printf("aX^2 + bX + c = 0 | a = %d | b = %d\n", a, b);
	puts("            ^\n");
	scanf("%d", &c);				// Вводим переменную "c"
	
	sys_clear();
	puts("Введённое уравнение:\n");
	printf("%dX^2 + %dX + %d = 0\n", a, b, c);
	
	int d = ((b * b) - 4 * (a * c));
	printf("\nD = b^2 - 4ac =\n%d - 4 * %d =\n%d - %d = %d\n\n", b * b, a * c, b * b, a * c * 4, d);
	if (d > 0){
		Math2(a, b, c, d);
	}
	else {puts("Ошибочное значение дискриминанта");}
	return 0;
}



int Math2(int a, int b, int c, int d){		// Вторая часть программы
	float rad_d = sqrt(d);					// Вычисляем корень из дискриминанта
	printf("√%d = %.0f\n\n", d, rad_d);
	
	int X1, X2;
	X1 = ((-b + rad_d) / (2 * a));			// Находим X1
	printf("X1 = %d\n", X1);
	
	X2 = ((-b - rad_d) / (2 * a));			// Находим X2
	printf("X2 = %d\n", X2);
	
	return 0;
}
