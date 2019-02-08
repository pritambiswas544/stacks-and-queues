#include<iostream>
#include"link.cpp"
using namespace std;


class Stack{
	public:
	Node*top;
			//calling an object from the class linkedlist
	LinkedList l1;
	Stack(){
		//top=l1.head;
		top=NULL;
	}

			//inserts at top
	void push(int value){
			//void insert(int value){
		l1.insert(value);
			//top=new_head;
		top=l1.head;
		



	}
			//deletes at top
	void pop(){
			//void deleteAt(int pos){
		l1.deleteAt(1);
			//top=new_head;
		top=l1.head;

	}
			//ckecks the stack is empty or not
	bool isEmpty(){
		if(top==NULL)return true;
		return false;
	}
			//countitems
	int size(){
		return l1.countItems();


	}
	void topDisplay(){

	}
			//display
	void display(){
		l1.display();



	}


};


	int main(){

		

	Stack s1;

	for(int i=0;i<5;i++){
		s1.push(i);
		}
		s1.display();
		s1.pop();
		s1.display();
		s1.pop();
		s1.display();
		s1.pop();
		s1.display();

		
	return 0;
}
