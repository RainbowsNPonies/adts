#include "StackLL.h"

class Stack::Node{
	public: 
		int data = 0;
		Node*link = nullptr;
};

Stack::~Stack(){
	while(num_elements!=0){
		pop();
	}
}


int Stack::size(){
	return num_elements;
}

void Stack::push(int c){
	Node*newPtr = new Node{c};
	newPtr->link = frontPtr;
	frontPtr = newPtr;
	num_elements++;
}

void Stack::pop(){
	Node*delPtr;
	delPtr = frontPtr;
	frontPtr = frontPtr->link;
	delete delPtr;
	num_elements--;
}

int Stack::top(){
	Node *currPtr = frontPtr;
	for(int loc=1;loc!=1;loc++){
		currPtr = currPtr->link;
	}
	return currPtr->data;
}

void Stack::clear(){
	while(num_elements!=0){
		pop();
	}
}
	
