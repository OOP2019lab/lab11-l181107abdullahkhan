#pragma once
#include"person.h"

class faculty:public person{

	int noOfcourse;
	int tele;

public:
	faculty(string a,string b, int c,int,int);
	~faculty();
	int getc();
	void setc(int);
	int getT();
	void setT(int);
	void printfaculty();
};