//
//  main.c
//  C10_�������_�ࠢ�����
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
	puts("�� �� ��� ᤥ����?\n");
	puts("1) ���᫨�� ��७� �����⭮�� �ࠢ�����");
	puts("2) ��� �� �ணࠬ��\n");
	
	
	
	char userCh;
	userCh = getchar();					// ����祭�� �⢥� �� ���짮��⥫�
	
	while (userCh == '1'){
		Math1();
		
		while (userCh != '\n') {			// ���� ���� getchar
			userCh = getchar();}

		puts("���� ���� ��� ���� �ࠢ����� ?");
		puts("1) ��\n2) ���");
		userCh = getchar();}
}


void sys_clear(void){				// ���⪠ �ନ����
	system("cls");
	puts("��襭�� �������� �ࠢ����� Windows x64 Edition");
	puts("________________________________________________\n");
}



void Math1(void){					// ��ࢠ� ���� �ணࠬ��
	
	int a, b, c;
	
	sys_clear();
	puts("������ �ࠢ�����\n");
	puts("aX^2 + bX + c = 0");
	puts("^\n");
	printf("a = ");
	scanf("%d", &a);				// ������� ����� "a"
	
	sys_clear();
	puts("������ �ࠢ�����\n");
	puts("aX^2 + bX + c = 0");
	puts("       ^\n");
	printf("a = %d | b = ", a);
	scanf("%d", &b);				// ������� ����� "b"
	
	sys_clear();
	puts("������ �ࠢ�����\n");
	puts("aX^2 + bX + c = 0");
	puts("            ^\n");
	printf("a = %d | b = %d | c = ", a, b);
	scanf("%d", &c);				// ������� ����� "c"
	
	sys_clear();
	puts("����񭭮� �ࠢ�����:\n");
	printf("%dX^2 + %dX + %d = 0\n", a, b, c);
	
	int d = ((b * b) - 4 * (a * c));
	printf("\nD = b^2 - 4ac =\n%d - 4 * %d =\n%d - %d = %d\n\n", b * b, a * c, b * b, a * c * 4, d);
	if (d > 0){
		Math2(a, b, c, d);
	}
	else {puts("�訡�筮� ���祭�� ���ਬ�����\n");}
}



void Math2(int a, int b, int c, int d){		// ���� ���� �ணࠬ��
	float rad_d = sqrt(d);					// ����塞 ��७� �� ���ਬ�����
	printf("�%d = %.0f\n\n", d, rad_d);
	
	float X1, X2;
	
	puts("X = -b +- �D");
	puts("    ________");
	puts("       2a\n");
	printf("X1 = (-%d + %.0f) ? (2 * %d) = ", b, rad_d, a);
	X1 = ((-b + rad_d) / (2 * a));			// ��室�� X1
	printf("%f\n", X1);
	
	printf("X1 = (-%d - %.0f) ? (2 * %d) = ", b, rad_d, a);
	X2 = ((-b - rad_d) / (2 * a));			// ��室�� X2
	printf("%f\n\n", X2);
}