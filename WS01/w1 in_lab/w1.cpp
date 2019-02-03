/*********************************
Name: Hyunjung Kim
Student Number: 148297179
*********************************/
#include<iostream>
#include "process.h"
#include "String.h"
#include <cstring>

using namespace std;

extern const int INITIAL = sict::MAX;

int main(int argc, char* argv[]) {
	
	cout << "Command Line : " << argv[0] << " ";
	
	for (int i = 1; i < argc; i++)
	{
		cout << argv[i] << " " ;
	}
	
	cout << endl;
	
	if (argc <= 1)
	{
		cout << "\n***Insufficient number of arguments***" << endl;
		return 1;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			sict::process(argv[i]);
		}
	}
		return 0;

}