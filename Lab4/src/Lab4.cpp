//============================================================================
// Name        : Lab4.cpp
// Author      : ME
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

class Patient{
	string givenname;
	string surname;
	int age;
	char bloodtype[3];
	char gender;
public:
	Patient();
	Patient(string, string, int, char[], char);
	void show();
};


Patient::Patient(string firstname, string lastname, int age1, char btype[], char gender1)
{
		givenname= firstname;
		surname= lastname;
		age= age1;
		strcpy(bloodtype,btype);
		gender= gender1;
}

void Patient:: show(){
	cout<<givenname<<endl;
}


//PENIS
