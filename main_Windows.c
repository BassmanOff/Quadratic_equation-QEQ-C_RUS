//
//  main.c
//  C10_�������_�ࠢ�����
//
//  Created by ���३ on 21.07.2020.
//  Copyright c 2020 ���३. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Math1(void);
int Math2(int a, int b, int c, int d);
int sys_clear(void);

int main(){
	sys_clear();
	puts("�� �� ��� ᤥ����?\n");
	puts("1) ���᫨�� ��७� �����⭮�� �ࠢ�����");
	puts("2) ��� �� �ணࠬ��\n");
	
	char userCh = getchar(); 		// ����祭�� �⢥� �� ���짮��⥫�
	getchar();						// ���� ���� � ᨬ����� "\n"
	if (userCh == '1'){				// �᫨ ��࠭� 1, � �믮������ ������
		Math1();
	}
	
	//system("cls");				// ���⪠ �ନ���� � ��室
	exit(228);
}


int sys_clear(void){				// ���⪠ �ନ����
	system("cls");
	puts("��襭�� �������� �ࠢ����� Windows x64 Edition");
	puts("________________________________________________\n");
	return 0;
}



int Math1(void){					// ��ࢠ� ���� �ணࠬ��
	
	int a, b, c;
	
	sys_clear();
	puts("������ �ࠢ�����\n");
	puts("aX^2 + bX + c = 0");
	puts("^\n");
	scanf("%d", &a);				// ������ ��६����� "a"
	
	sys_clear();
	puts("������ �ࠢ�����\n");
	printf("aX^2 + bX + c = 0 | a = %d\n", a);
	puts("       ^\n");
	scanf("%d", &b);				// ������ ��६����� "b"
	
	sys_clear();
	puts("������ �ࠢ�����\n");
	printf("aX^2 + bX + c = 0 | a = %d | b = %d\n", a, b);
	puts("            ^\n");
	scanf("%d", &c);				// ������ ��६����� "c"
	
	sys_clear();
	puts("����񭭮� �ࠢ�����:\n");
	printf("%dX^2 + %dX + %d = 0\n", a, b, c);
	
	int d = ((b * b) - 4 * (a * c));
	printf("\nD = b^2 - 4ac =\n%d - 4 * %d =\n%d - %d = %d\n\n", b * b, a * c, b * b, a * c * 4, d);
	if (d > 0){
		Math2(a, b, c, d);
	}
	else {puts("�訡�筮� ���祭�� ���ਬ�����");}
	return 0;
}



int Math2(int a, int b, int c, int d){		// ���� ���� �ணࠬ��
	float rad_d = sqrt(d);					// ����塞 ��७� �� ���ਬ�����
	printf("�%d = %.0f\n\n", d, rad_d);
	
	int X1, X2;
	X1 = ((-b + rad_d) / (2 * a));			// ��室�� X1
	printf("X1 = %d\n", X1);
	
	X2 = ((-b - rad_d) / (2 * a));			// ��室�� X2
	printf("X2 = %d\n", X2);
	
	return 0;
}
