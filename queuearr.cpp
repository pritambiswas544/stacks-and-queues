#include<iostream>
using namespace std;
				//creating an array of max size 100
int queue[100],n=100;
				//class named queueArr

class queueArr{
	public:
	int end,front;
				//constructor
	queueArr(){
		
	end=-1;
	front=-1;
			
}
				//inserting an element in the end
void enqueue(int value){
	if(end>=n-1){
		cout<<"Stack overflow!! "<<endl;
	return;
	}
	else{
		end=end+1;
		queue[end]=value;
	}
}
				//deleting an element from front
void dequeue(){
	if(front==-1 && end==-1){
		cout<<"ERROR: there is no item to delete "<<endl;
	return;
	}
	else{
		front=front+1;
	}
}
					//checking the list is empty or not
bool isEmpty(){
	if(end==-1 && front==-1){
		return true;
	}
	else{
		return false;
	}
}
					//displaying the elements
void display(){
	if(front==-1 && end==-1){
	cout<<"there is no element"<<endl;
	}
	else{
	
	
	for(int i=front;i<=end;i++){
		cout<<queue[i];
	}
	cout<<endl;
	}
}
};
					//main
int main(){
	queueArr q1;
	for(int i=1;i<5;i++){
		q1.enqueue(i);
		}
	/*q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);*/
	q1.display();
	q1.enqueue(8);
	q1.display();
	q1.dequeue();
	q1.display();
	q1.dequeue();
	q1.display();
	return 0;
}
	
		

