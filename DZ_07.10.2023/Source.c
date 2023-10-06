#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846

#include <stdio.h>
#include <math.h>
#include <locale.h>

int task3(), task_dz();

int main() {
	setlocale(LC_ALL, "RUS");

	task3();
	task_dz();

	return 0;
}

int task3() {
	double x, y;
	  
	printf("\n������� X: ");
	scanf("%lf", &x);
	printf("������� Y: ");
	scanf("%lf", &y);

	if (x == 0 & y == 0) return 0;
	else
		if (x > 0 & y > 0) printf("����� ��������� � 1-� ��������");
		if (x < 0 & y > 0) printf("����� ��������� �� 2-� ��������");
		if (x > 0 & y < 0) printf("����� ��������� � 4-� ��������");
		if (x < 0 & y < 0) printf("����� ��������� � 3-� ��������");
}

int task_dz() {

	//����������� ������:
	//����� � ������������ x = 1; y = 0 ����������� �������������� ��������
	//����� � ������������ x = 2; y = 0,5 �� ����������� �������������� ��������  

	double x, y;

	printf("\n������� X: ");
	scanf("%lf", &x);
	printf("������� Y: ");
	scanf("%lf", &y);

	if ((y <= 1 && y >= 0) && ((x <= M_PI / 2 && x >= 0) || (x <= 5 * M_PI / 2 && x >= 2 * M_PI))) \
		printf("����� � ������������ x = %.3lf; y = %.3lf ����������� �������������� ��������", x, y);
	else
		printf("����� � ������������ x = %.3lf; y = %.3lf �� ����������� �������������� ��������", x, y);
}