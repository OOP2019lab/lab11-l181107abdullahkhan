#include"person.h"

person::person(string a, string b, int c){
	firstname=a;
	lastname=b;
	age=c;
	cout<<"overloaded constructor called"<<endl;
}
person::person(){
	firstname=" ";
	lastname=" ";
		age=0;
}
person::~person(){
	cout<<"destructor called for person"<<endl;
}
void person::setfname(string a){
	firstname=a;
}
string person::getfname(){

	return firstname;
}
void person::setlname(string b){
	lastname=b;
}
string person::getlname(){
	return lastname;
}
void person::printperson(){

	cout<<firstname<<" "<<lastname<<" is "<<age<<" years old"<<endl;
	
}
