#include<iostream> /* Подключение библиотеки функции  ввода/вывода(iostream) и Windows API(Windows.h)*/
#include<Windows.h> 
using namespace std;/*Объявление пространства имен std*/
void sorter(char marr[]) { /*Объявление и описание функции sorter, которая принимает массив
						   элементов символьного типа в виде аргумента и сортирует их по алфавиту*/
	int i = 0;
	do {
		cout << marr[i] << " "; /*Вывод исходного массива на экран*/
		i++;
	} while (i < 13);
	cout << endl;
	i = 0;
	int j = 0;
	int temp = 0;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13 - i; j++) { /*Сортировка элементов с использованием метода "пузырьковой сортировки*/
			if (marr[j] > marr[j + 1]) {
				temp = marr[j];
				marr[j] = marr[j + 1];
				marr[j + 1] = temp;
			}
		}
	}
	i = 0;
	do {
		cout << marr[i] << " "; /*Вывод отсортированного массива на экран*/
		i++;
	} while (i < 15);
}
int main(int argc, const char *argv[]) { /*Описание функции main*/
	static char arr[] = { 'K','S','C','M','R','O','N','Q','P','Z','G','C','H' }; /*Исходный массив, объявленный в теле 
																				 функции main*/
	sorter(arr); /*Инициация функции sorter(some_array)*/
	system("pause");/*Приостановление выполнение программы, позволяющее ознакомиться с результатами выполнения программы*/
}