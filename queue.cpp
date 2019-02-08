#include<iostream>
#include"link.cpp"
using namespace std;


				//defining a class called queue
class queue{
	public:
				//ptrs for the queue
	Node*end;
	Node*front;
				//calling an object from the class linkedlist of link.cpp
	LinkedList l2;
				//constructor to make the ptrs to point to null by default
	queue(){
		end=NULL;
		front=NULL;
	}
				//inserting a node at the end

	void enqueue(int value){
		l2.insert(value);
		end=l2.head;
	}
				//deleting a node from the end
	void dequeue(){
		l2.delet();
		front=l2.tail;
	}
				//checking if the queue is empty or not
	bool isEmpty(){
		if(front==NULL)return true;
		return false;
	}
				//returning the no. of items of the queue
	int size(){
		return l2.countItems();
	}
				//displaying
	void display(){
		l2.display();
	}
};

	int main(){

queue q1;
	for(int j=0;j<5;j++){
		q1.enqueue(j);
	}
		q1.display();
		q1.dequeue();
		q1.display();
		q1.dequeue();
		q1.display();
		
	return 0;
}

