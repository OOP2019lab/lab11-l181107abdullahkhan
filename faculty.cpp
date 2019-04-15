#include"faculty.h"

faculty::faculty(string a,string b,int c,int n,int t):person(a,b,c){
	noOfcourse=c;
	tele=t;
	cout<<"overloaded constructor called"<<endl;
}
faculty::~faculty(){
	cout<<"destructor called for faculty"<<endl;
}

void faculty::setc(int a){
	noOfcourse=a;
}
void faculty::setT(int b){

	tele=b;
}
int faculty::getc(){
	return noOfcourse;
}
int faculty::getT(){
	return tele;
}
void faculty::printfaculty(){

	printperson();
	cout<<" who teaches "<<" "<<noOfcourse<<" courses and his extension is"<<" "<<tele<<endl;
}