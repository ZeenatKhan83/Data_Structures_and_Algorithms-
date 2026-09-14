#include<iostream>
using namespace std;
int main(){
	int x = 20;
	int* p = &x;
	
	cout<<"Value of x: "<< x <<endl;
	
	cout<<"Address of x: "<< &x <<endl;
	
	cout<<"Value stored in pointer: "<< p <<endl;
	
	cout<<"Value using pointer: "<< *p <<endl;
	
	return 0;
}
