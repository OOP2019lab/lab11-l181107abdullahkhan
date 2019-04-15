#pragma once
#include"person.h"

class student:public  person{
	
	float gpa;

public:
	student(string a, string b,int c,float g);
	~student();
	float getgpa();
	void setgpa(float);
	void printstudent();
};