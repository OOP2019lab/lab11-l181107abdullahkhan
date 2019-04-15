
#include"student.h"

student::student(string a,string b,int c, float g):person(a,b,c){

	cout<<"overloaded constructor called"<<endl;
	gpa=g;
}

student::~student(){
	cout<<"destructor called for student"<<endl;
}
void student::setgpa(float a){
	gpa=a;
}
float student::getgpa(){
	return gpa;
}
void student::printstudent(){
	
	printperson();
	cout<<" whose gpa is "<<gpa<<endl;
}

