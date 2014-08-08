// HowToDataStructures.cpp : Defines the entry point for the console application.
//
//#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	std::vector<int> v; 
	size_t size = 10;
	std::vector<int> array(size);    // make room for 10 integers,
	// and initialize them to 0
	// do something with them:
	for(int i=0; i<size; ++i){
		array[i] = i;
	}
	// no need to delete anything
	for(int i=0; i<size; ++i){
		std::cout<<array[i];
	}
	/*std::vector<int> array;
	try{
	array.at(1000) = 0;
	}
	catch(std::out_of_range o){
	std::cout<<o.what()<<std::endl;
	}
	*/
	return 0;
}

