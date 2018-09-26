#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void zer(int wart, int&ref)
{
	cout << "\tW funkcji zer przed zerowaniem: \n"
		<< "\tWart= "
		<< wart
		<< ", ref = "
		<< ref << endl;
	wart = 0;
	ref = 0;

	cout<<"\tW funkcji zer po wyzerowaniu: \n"
		<<"\tWart = "
		<<wart
		<< ", ref = "
		<< ref << endl;

}