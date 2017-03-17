#include "StackV.h"
#include <vector>

int Stack::size(){
	return data.size();
}

void Stack::push(int c){
	data.push_back(c);
}

void Stack::pop(){
	data.pop_back();
}

int Stack::top(){
	return data.back();
}


void Stack::clear(){
	data.clear();
}

