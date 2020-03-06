#include <iostream>
#include <ctime>
#include <string>
#include <Windows.h>
//подт€гуЇ прототип функц≥њ з calc.h а прототип в свою чергу п≥дт€гуЇ реал≥зац≥ю
#include"calc.h"
#include "stringWorker.h"
using namespace std;

#define CLEAR system("cls");
//#define PAUSE sleep(2000);
#define PI 3.14
#define begine {
#define end }

int main()
{
	//cout << "Hello world 1" << endl;
	//CLEAR;
	//cout << "Hello world 2" << endl;
	//CLEAR;
	//cout << "Hello world 3" << endl;
	//cout << PI << endl;
	//for (int i = 0; i < 10; i++)
	//	begine
	//	cout << i << endl;
	//end

	 int result = Calc::sum(10, 5);
	 cout << result << endl;
	StringWorker::sum("Hel","lo");


	/* int result2 = mnozenn9(5, 5);
	 cout << result2 << endl;
	 double result3 = dilenn9(10, 2);
	 cout << result3 << endl;
	 int result4 = vidnimann9(15, 6);
	 cout << result4 << endl;*/
	system("pause");
	return 0;
}