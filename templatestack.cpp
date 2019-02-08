#include<iostream>
using namespace std;
					//creating the array of 100 eleemnts and also defining the data types

int stack[100],n=100;
					//by default top should not point to anything
					//means it should not point any blocks of integers
			//class stackarr
class stackarr{
	public:
	int top;
	stackarr(){
	top=-1;
	}
		
	 				//inserting element at the top
void push(int value){
					//condition for stack overflow
	if(top>=n-1){
		cout<<"no more space available:stack overflow"<<endl;
		return;
	}
	else{
		top=top+1;
		stack[top]=value;
	}
	
}				//deleting an element from the top
void pop(){
	if(top==-1){
		cout<<"ERROR404:there is no element to delete"<<endl;
		return;
	}
	else{
		top=top-1;
		
	}
}
					//checking the list is empty or not
bool isEmpty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}
					//displaying the elements
void display(){
	int i;
	//cout<<"the elements of stack are :"<<endl;
	for(i=0;i<=top;i++){
		cout<<stack[i];
	}
	cout<<endl;
}
};
					//main
/*int main(){
	stackarr s1;
	for(int i=0;i<5;i++){
		s1.push(i);
		}
	s1.display();
	s1.push(8);
	s1.display();
	s1.pop();
	s1.display();
	s1.pop();
	s1.display();
	return 0;
}*/
	
