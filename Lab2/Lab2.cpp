#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>


int variant();
void f1(int** count);
void f2(int** count);
void f3(int** count);
void f4(int** count);
void f5(int** count);
void f6(int** count);
void f7(int** count);
void f8(int** count);
void f9(int** count);
void f10(int** count);

int main() {
	setlocale(LC_ALL, "Rus");
	int var = 0;
	int i;
	int *count = NULL;
	count = malloc(sizeof(int) * 10);
	for (i = 0; i < 10; i++) {
		count[i] = 0;
	}

	do {

		var = variant();

		switch (var) {

		case 0:

			printf_s("Вывести количество выводов функций:\n");
			for (int i = 0; i < 10; i++) {
				printf_s("% d\n", count[i]);
			}
			system("pause");
			break;

		case 1:
			printf_s("Вызвана Функция 1\n");
			f1(&count);
			system("pause");
			break;

		case 2:
			printf_s("Вызвана Функция 2\n");
			f2(&count);
			system("pause");
			break;

		case 3:
			printf_s("Вызвана Функция 3\n");
			f3(&count);
			system("pause");
			break;

		case 4:
			printf_s("Вызвана Функция 4\n");
			f4(&count);
			system("pause");
			break;

		case 5:
			printf_s("Вызвана Функция 5\n");
			f5(&count);
			system("pause");
			break;

		case 6:
			printf_s("Вызвана Функция 6\n");
			f6(&count);
			system("pause");
			break;

		case 7:
			printf_s("Вызвана Функция 7\n");
			f7(&count);
			system("pause");
			break;

		case 8:
			printf_s("Вызвана Функция 8\n");
			f8(&count);
			system("pause");
			break;

		case 9:
			printf_s("Вызвана Функция 9\n");
			f9(&count);
			system("pause");
			break;

		case 10:
			printf_s("Вызвана Функция 10\n");
			f10(&count);
			system("pause");
			break;
		}



	} while (var != 11);

	return 0;
}

int variant() {
	system("cls");
	int var;

	printf_s("Если хотите вызвать функцию, введите ее номер(от 1 до 10):\n");
	printf_s("Если хотите увидеть количество выводов функций, нажмите 0:\n");
	printf_s("Если хотите выйти, нажмите 11:\n");
	scanf_s("%d", &var);
	return var;
}


void f1(int** count) {
	int n;
	int s;
	int a;
	int k;
	scanf_s("Введите число: %d\n", &a);
	for (n = a, s = 0; n != 0; n = n / 10)
	{
		k = n % 10;
		s = s + k;
	}
	*count += 1;
	printf_s("Результат: %d\n", s);

}

void f2(int** count) {
	int n;
	int s;
	int a;
	int k;
	scanf_s("Введите число: %d\n", &a);
	for (n = a, s = 0; n != 0; n = n / 10)
	{
		k = n % 10;
		if (k > s) s = k;

	}
	*(count+1) += 1;
	printf_s("Результат: %d\n", s);
}

void f3(int** count) {
	int m;
	int n;
	int j;
	int i;

	printf_s("Введите количество элементов массива:\n");
	scanf_s("%d\n", &n);
	
	int* A = NULL;
	A = malloc(sizeof(int) * n);

	printf_s("Введите массив чисел, состоящий из %d элементов:\n", n);

	for (i = 0; i < n; i++) {
		scanf_s("%d\n", A[i]);
	}

	for (i = 0; i < n; i++) {
		for (m = 2; m < *(A+i); m++)
		{
			if (*(A + i) % m == 0) break;
		}
		if (m == *(A+i)) {
			for (j = i; j < n - 1; j++) A[j] = *(A + j);
			n--;
			i--;
		}
	}
	*(count + 2) += 1;
	printf_s("Результат:\n");
	for (i = 0; i < n; i++) {
		printf_s("%d\n", *(A+i));
	}

}
void f4(int** count) {//не понимаю как обозвать переменные, кроме как по имени
	int i;
	
	int n;
	int val;
	int m;

	printf_s("Введите n:\n");//не знаю что такое n
	scanf_s("%d\n", &n);

	int* A = NULL;
	A = malloc(sizeof(int) * (n-1));

	printf_s("Введите val:\n");//не знаю что такое val
	scanf_s("%d\n", &val);
	for (i = 0; (i < n - 1) && (val != 1); i++) {
		for (m = 2; val % m != 0; m++);
		val /= m;
		A[i] = m;
	}
	
	A[i] = 0;
	*(count + 3) += 1;
	printf_s("Результат:\n");
	for (i = 0; i < n - 1; i++) {
		printf_s("% d\n", *(A+i));
	}

}
void f5(int** count) {
	int i;
	int k;
	int A[10]; 
	printf_s("Введите массив, состоящий из 10 элементов:\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d\n", &A[i]);
	}
	for (i = 0, k = -1; i < 10; i++) {
		if (A[i] < 0) continue;
		if (k == -1) k = i;
		else
			if (A[i] < A[k]) k = i;
	}

	*(count + 4) += 1;
	printf_s("Результат:\n");
	printf_s("%d\n", k);
}
void f6(int** count) {
	int i;
	int k;
	int A[10];
	printf_s("Введите массив, состоящий из 10 элементов:\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d\n", &A[i]);
	}
	for (i = 1, k = 0; i < 10; i++)
		if (A[i] > A[k]) k = i;

	*(count + 5) += 1;
	printf_s("Результат:\n");
	printf_s("%d\n", k);
}
void f7(int** count) {
	int i;
	int s;
	int n;

	printf_s("Введите количество элементов массива:\n");
	scanf_s("%d\n", &n);

	int* A = NULL;
	A = malloc(sizeof(int) * (n - 1));

	printf_s("Введите массив чисел, состоящий из %d элементов:\n", n);
	for (i = 0; i < n; i++) {
		scanf_s("%d\n", &A[i]);
	}
	for (s = 0, i = 0; i < n; i++) s = s + A[i];
	*(count + 6) += 1;
	printf_s("Результат:\n");
	printf_s("%d\n", s);
}
void f8(int** count) {
	int s;
	int n;
	int a;
	printf_s("Введите число:\n");
	scanf_s("%d\n", &a);
	for (s = 0, n = 2; n < a; n++)
	{
		if (a % n == 0) s++;
	}
	if (s == 0) puts("Good\n");
	*(count + 7) += 1;
}
void f9(int** count) {
	int i;
	int n;
	printf_s("Введите количество элементов массива:\n");
	scanf_s("%d\n", &n);

	int* A = NULL;
	A = malloc(sizeof(int) * (n - 1));

	printf_s("Введите массив чисел, состоящий из %d элементов:\n", n);
	for (i = 0; i < n; i++) {
		scanf_s("%d\n", &A[i]);
	}
	for (i = 0; i < n; i++)
		if (A[i] < 0) break;
	if (i == n) puts("Good\n");
	*(count + 8) += 1;
}
void f10(int** count) {
	int i;
	int s;
	int A[10];
	printf_s("Введите массив, состоящий из 10 элементов:\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d\n", &A[i]);
	}
	for (s = A[0], i = 1; i < 10; i++)
		A[i - 1] = A[i];
	A[9] = s;
	*(count + 9) += 1;
	printf_s("Результат:\n");
	for (i = 0; i < 10; i++) {
		printf_s("% d\n", *(A+i));
	}
}