#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int*pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

template <typename T>
void sum_arr(T* arr, const int length, T* var);

//���������� ������� ���������� ������� �� ��������� �� ����� �� ���
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

// ����� ������� � �������
template <typename T>
void show_arr(T arr[], const int length) {
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 20;

	//��������� �� ���������� 
	/*cout << "����� n = " << &n << '\n'; //����� ������ ����������

	int* pn; //���������� ��������� �� ��� int
	pn = &n; //���������� ��������� �� ����� ���������� n
	// int*pn = &n; //������������

	cout << "����� n = " << pn << '\n'; //����� �������� ��������� pn

	cout << "n = " << n << '\n';
	cout << "n = " << *pn<< '\n';  //����� �������� n � ������� �������������� ��������� pn

	*pn = 15; //������ �������� n � ������� �������������� ��������� pn
	cout << "����� n = " << n << '\n';

	cout << "����� m = " << &m << '\n';
	pn = &m; //�������������� ��������� �� ����� ���������� m
	cout << "����� m = " << pn << '\n';

	int* pm = &m;
	*/

	//��������� � �������
	/*const int size = 5;
	//				0  1  2  3  4
	int arr[size]{ 10,20,30,40,50 };

	int* pa2 = &arr[2]; //���������� ��������� �� ������� ������� � �������� 2
	cout << "arr[2] = " << *pa2 << '\n'; //30
	pa2++;
	cout << "*pa2 = " << *pa2 << '\n'; //40

	pa2 -= 2;
	cout << "*pa2 = " << *pa2 << '\n'; //20

	//����� ������� ����� ��������� pa2
	pa2 = arr; //���������� ��������� pa2 �� ����� ������� �������� ������� arr (arr ��� �� ������ �������� ��������, �� � ��������� �� ��� ������ �������!!!!!!)
	cout << "*pa2 = " << *pa2 << '\n'; //10
	cout << "������: \n";
	for (int i = 0; i < size; i++)
		cout << *(pa2 +i) << ' '; //arr[i] = *(arr+i)
	cout << '\n';
	*/

	//��������� � �������
	/*cout << n << ' ' << m << '\n'; //10,20
	//my_swap(n,m); // �� ��������, �.�. ��������� - ��� ���� ����� 
		pswap(&n, &m); //��������, �.�. ���������� ������ ����������!!!!
	cout << n << ' ' << m << '\n'; //20 10
	*/

	//������ 1.����� ��������� ������� � ����������
	cout << "������ 1.\n����������� ������:\n";
	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);//�������� �� ���� ������ �� 1 �� 10 ������������ (������� ������ 11, �.�. ���  �� ������)
	show_arr(arr1,  size1);
	sum_arr(arr1, size1,&n);
	cout << "����� ��������� ������� = " << n << '\n';


	return 0;
}


template <typename T>
void sum_arr(T *arr, const int length, T* var) {
	*var = 0;
	for (int i = 0; i < length; i++)
		*var += *(arr + i);
}