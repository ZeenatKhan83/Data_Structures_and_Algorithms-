#include<iostream>
using namespace std;
int main(){
	int x = 20;
	float y = 3.14;
	
	int* p = &x;
	float* q = &y;
	
	cout<<"Value of x: "<< x <<endl;
	
	cout<<"Address of x: "<< &x <<endl;
	
	cout<<"Value stored in pointer: "<< p <<endl;
	
	cout<<"Value using pointer: "<< *p <<endl;
	
	cout<<endl;
	
	cout<<"Value of y: "<< y <<endl;
	
	cout<<"Address of y: "<< &y <<endl;
	
	cout<<"Value stored in pointer: "<< q <<endl;
	
	cout<<"Value using pointer: "<< *q <<endl;
	return 0;
}
