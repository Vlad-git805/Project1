#include <iostream>
#include <ctime>

using namespace std;

//void Zavd1();
//
//float *Zavd2();
//
//void Zavd3(float *a);
//
//template <typename T>
//T Create(T a);
//
//int *CreateNewArr(int *arr, int size);
//
//int *CreateNewArrWithAddElement(int *arr1, int size, int f);
//
//int main()
//{
//	//srand(time(0));
//	//Zavd1();
//
//	//cout << Zavd2() << endl;
//
//	//float *a = new float;
//	//Zavd3(a);
//
//	//double a;
//	//Create(a);
//
//	//int size;
//	//cin >> size;
//	//int *arr = new int[size];
//	//for (int i = 0; i < size; i++)
//	//{
//	//	*(arr + i) = rand() % 10;
//	//	cout << *(arr + i) << "  ";
//	//}
//	//cout << endl;
//	//int *a = CreateNewArr(arr, size);
//	//for (int i = 0; i < size; i++)
//	//{
//	//	cout << *(a + i) << "  ";
//	//}
//	//delete[]arr;
//	//delete[]a;
//
//	/*int size;
//	cin >> size;
//	int *arr1 = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		*(arr1 + i) = rand() % 10;
//		cout << *(arr1 + i) << "  ";
//	}
//	cout << endl;
//	int f = 0;
//	cout << "Enter the number you want to add" << endl;
//	cin >> f;
//	int *a = CreateNewArrWithAddElement(arr1, size, f);
//	for (int i = 0; i < size + 1; i++)
//	{
//		cout << *(a + i) << "  ";
//	}
//	cout << endl;
//	delete[] arr1;
//	delete[] a;*/
//
//	system("pause");
//	return 0;
//}

void Zavd1()
{
	int *a = new int;
	double *b = new double;
	long *c = new long;
	bool *d = new bool;
	char *f = new char;
	*a = 2;
	*b = 3;
	*c = 10;
	*d = true;
	*f = 'f';
	cout << *a + *b + *c + *d << endl;
	cout << *f << endl;
	delete a;
	delete b;
	delete c;
	delete d;
	delete f;
}

float *Zavd2()
{
	float *a = new float;
	return a;
}

void Zavd3(float *a)
{
	delete a;
}

template <typename T>
T Create(T a)
{
	T *a = new T;
	return a;
}

int *CreateNewArr(int *arr, int size)
{
	int *arr2 = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(arr2 + i) = *(arr + i);
	}
	return arr2;
}

int *CreateNewArrWithAddElement(int *arr1, int size, int f)
{
	int *arr2 = new int[size + 1];
	for (int i = 0; i < size + 1; i++)
	{
		*(arr2 + i) = *(arr1 + i);
	}
	*(arr2 + (size)) = f;
	return arr2;
}

template <typename T>
void DeleteArr(T *arr)
{
	delete[]arr;
}

int main()
{
	srand(time(0));
	int* arr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i]<< "  ";
	}
	DeleteArr(arr);
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}

	system("pause");
	return 0;
}