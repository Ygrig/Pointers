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

//Заполнение массива случайными числами из диапазона от бегин до энд
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

// Вывод массива в консоль
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

	//Указатели на переменные 
	/*cout << "Адрес n = " << &n << '\n'; //вывод адреса переменной

	int* pn; //объявление указателя на тип int
	pn = &n; //направляем указатель на адрес переменной n
	// int*pn = &n; //альтернатива

	cout << "Адрес n = " << pn << '\n'; //вывод значения указателя pn

	cout << "n = " << n << '\n';
	cout << "n = " << *pn<< '\n';  //вывод знаечния n с помощью разыименования указателя pn

	*pn = 15; //меняем знаечние n с помощью разыименования указателя pn
	cout << "Новая n = " << n << '\n';

	cout << "Адрес m = " << &m << '\n';
	pn = &m; //перенаправляем указатель на адрес переменной m
	cout << "Адрес m = " << pn << '\n';

	int* pm = &m;
	*/

	//Указатели и массивы
	/*const int size = 5;
	//				0  1  2  3  4
	int arr[size]{ 10,20,30,40,50 };

	int* pa2 = &arr[2]; //записываем указатель на элемент массива с индексом 2
	cout << "arr[2] = " << *pa2 << '\n'; //30
	pa2++;
	cout << "*pa2 = " << *pa2 << '\n'; //40

	pa2 -= 2;
	cout << "*pa2 = " << *pa2 << '\n'; //20

	//Вывод массива через указатель pa2
	pa2 = arr; //направляем указатель pa2 на адрес первого элемента массива arr (arr это не только название масссива, но и указатель на его первый элемент!!!!!!)
	cout << "*pa2 = " << *pa2 << '\n'; //10
	cout << "Массив: \n";
	for (int i = 0; i < size; i++)
		cout << *(pa2 +i) << ' '; //arr[i] = *(arr+i)
	cout << '\n';
	*/

	//Указатели и функции
	/*cout << n << ' ' << m << '\n'; //10,20
	//my_swap(n,m); // не работает, т.к. параметры - это лишь копии 
		pswap(&n, &m); //работает, т.к. передаются адреса переменных!!!!
	cout << n << ' ' << m << '\n'; //20 10
	*/

	//Задача 1.Сумма элементов массива в переменную
	cout << "Задача 1.\nИзначальный массив:\n";
	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);//диапазон мы сами задали от 1 до 10 включительно (поэтому ставим 11, т.к. оно  не входит)
	show_arr(arr1,  size1);
	sum_arr(arr1, size1,&n);
	cout << "Сумма элементов массива = " << n << '\n';


	return 0;
}


template <typename T>
void sum_arr(T *arr, const int length, T* var) {
	*var = 0;
	for (int i = 0; i < length; i++)
		*var += *(arr + i);
}