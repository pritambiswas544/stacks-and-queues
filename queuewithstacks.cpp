#include<iostream>

#include"templatestack.cpp"
using namespace std;
				//making a class named queue
	class queue{
	public:
		stackarr s1;
		stackarr s2;
		//int *a=(int*)&(s1.top);
		//int *b=(int*)&(s2.top);

				//function for inserting the element
	void enqueue(int x){
				//checking if the stack s1 is empty
		while(!s1.isEmpty()){
				//moving all the elements from s1 to s2
			s2.push(s1.top);
				s1.pop();
		}
		s1.push(x);
				//again pushing back all elements from s2
				//to get reverse order of the stack
		while(!s2.isEmpty()){
			s1.push(s2.top);
			s2.pop();
		}
	}
				//function for deleting one element
	void dequeue(){
				//checking if the list is empty
		if(s1.isEmpty()){
			cout<<"there is no item to delete"<<endl;
			return;
		}
				//if not then delete
		else{
			s1.pop();
			return;
		}
		}		//for displaying the elements
	void display(){
		s1.display();
	}
};
				//main
	int main(){
		queue q;

	for(int i=0;i<5;i++){
		q.enqueue(i);
		}
	q.display();
	q.enqueue(8);
	q.display();
	q.dequeue();
	q.display();
	q.dequeue();
	q.display();
	return 0;
	}

