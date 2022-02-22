// ������������ ������ ������� C++
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <typename T> void showArr(T array[], int length);
template <typename T> void rangeSort(T array[], int length);
template <typename T> void moveArr(T array[], int length, int shift);
void typeOfN(int n) {
	cout << "INT";
}
void typeOfN(double n) {
	cout << "DOUBLE";
}
int recSum(int n1, int n2);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;

	// ������ 1
	/*cout << "������ 1.\n5 - ";
	typeOfN(5);
	cout << "\n1.2 - ";
	typeOfN(1.2);
	cout << endl; */

	// ������ 2
	/*cout << "������ 2.\n������� ������ � ����� ���������: ";
	cin >> n >> m;
	if (n > m)
		swap(n, m);
	cout << "����� ����� �� " << n << " �� " << m << " = " << recSum(n, m) << "\n\n"; */

	// ������ 3
	/*cout << "������ 3.\n����������� ������:\n";
	int z3[20];
	for (int i = 0; i < 20; i++) {
		z3[i] = rand() % (20 + 1 - (-20)) + (-20) + 30;
	}
	showArr(z3, 20);
	cout << "\n��������������� ������:\n";
	rangeSort(z3, 20);
	showArr(z3, 20);
	cout << "\n\n"; */

	// ������ 4
	/*cout << "������ 4.\n����������� ������:\n";
	int z4[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	showArr(z4, 10);
	cout << "\n������� �����: ";
	cin >> n;
	moveArr(z4, 10, n);
	cout << "�������� ������:\n";
	showArr(z4, 10);
	cout << "\n\n"; */

	// ������ 5

	return 0;
}
// ������ 4
template <typename T> void moveArr(T array[], int length, int shift) {
	for (int j = 0; j < shift; j++) {
		T tmp = array[length - 1];
		for (int i = length - 1; i > 0; i--)
			array[i] = array[i - 1];
		array[0] = tmp;
	}
}

// ������ 3
template <typename T> void rangeSort(T array[], int length) {
	int index = -1, lastIndex = -1;
	for (int i = 0; i < length; i++)
		if (array[i] < 0) {
			index = i;
			break;
		}
	for (int i = length - 1; i >= 0; i--)
		if (array[i] < 0) {
			lastIndex = i;
			break;
		}
	if (index != -1)
		for (int i = lastIndex; i > index; i--)
			for (int j = index; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);

}

// ������ 2
int recSum(int n1, int n2) {
	if (n1 == n2)
		return n2;
	return recSum(n1 + 1, n2) + n1;
}

// ����� �������
template <typename T> void showArr(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]";
}