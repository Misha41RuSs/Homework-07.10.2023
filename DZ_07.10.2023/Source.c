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
	  
	printf("\nВведите X: ");
	scanf("%lf", &x);
	printf("Введите Y: ");
	scanf("%lf", &y);

	if (x == 0 & y == 0) return 0;
	else
		if (x > 0 & y > 0) printf("Точка находится в 1-й четверти");
		if (x < 0 & y > 0) printf("Точка находится во 2-й четверти");
		if (x > 0 & y < 0) printf("Точка находится в 4-й четверти");
		if (x < 0 & y < 0) printf("Точка находится в 3-й четверти");
}

int task_dz() {

	//КОНТРОЛЬНЫЙ ПРИМЕР:
	//Точка с координатами x = 1; y = 0 принадлежит заштрихованным областям
	//Точка с координатами x = 2; y = 0,5 не принадлежит заштрихованным областям  

	double x, y;

	printf("\nВведите X: ");
	scanf("%lf", &x);
	printf("Введите Y: ");
	scanf("%lf", &y);

	if ((y <= 1 && y >= 0) && ((x <= M_PI / 2 && x >= 0) || (x <= 5 * M_PI / 2 && x >= 2 * M_PI))) \
		printf("Точка с координатами x = %.3lf; y = %.3lf принадлежит заштрихованным областям", x, y);
	else
		printf("Точка с координатами x = %.3lf; y = %.3lf не принадлежит заштрихованным областям", x, y);
}