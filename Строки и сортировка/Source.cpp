#include<iostream> /* ����������� ���������� �������  �����/������(iostream) � Windows API(Windows.h)*/
#include<Windows.h> 
using namespace std;/*���������� ������������ ���� std*/
void sorter(char marr[]) { /*���������� � �������� ������� sorter, ������� ��������� ������
						   ��������� ����������� ���� � ���� ��������� � ��������� �� �� ��������*/
	int i = 0;
	do {
		cout << marr[i] << " "; /*����� ��������� ������� �� �����*/
		i++;
	} while (i < 13);
	cout << endl;
	i = 0;
	int j = 0;
	int temp = 0;
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13 - i; j++) { /*���������� ��������� � �������������� ������ "����������� ����������*/
			if (marr[j] > marr[j + 1]) {
				temp = marr[j];
				marr[j] = marr[j + 1];
				marr[j + 1] = temp;
			}
		}
	}
	i = 0;
	do {
		cout << marr[i] << " "; /*����� ���������������� ������� �� �����*/
		i++;
	} while (i < 15);
}
int main(int argc, const char *argv[]) { /*�������� ������� main*/
	static char arr[] = { 'K','S','C','M','R','O','N','Q','P','Z','G','C','H' }; /*�������� ������, ����������� � ���� 
																				 ������� main*/
	sorter(arr); /*��������� ������� sorter(some_array)*/
	system("pause");/*��������������� ���������� ���������, ����������� ������������ � ������������ ���������� ���������*/
}