#pragma once
#include<iostream>
#include<string>
using namespace std;

class person{

	string firstname;
	string lastname;

protected:
	int age;

public:
	person(string,string,int);
	person();
	~person();
	string getfname();
	void setfname(string);
	string getlname();
	void setage(int);
	int getage();
	void setlname(string);
	void printperson();
};