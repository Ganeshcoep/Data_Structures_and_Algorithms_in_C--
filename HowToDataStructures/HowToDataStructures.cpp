// HowToDataStructures.cpp : Defines the entry point for the console application.
//Reference: http://www.codeguru.com/cpp/cpp/cpp_mfc/stl/article.php/c4027/C-Tutorial-A-Beginners-Guide-to-stdvector-Part-1.htm

#include "stdafx.h"
#include <vector>
#include <iostream>


using namespace std;
int main()
{
	/* Declaring and using*/
	std::vector<int> v; 
	size_t size = 10;
	std::vector<int> array(size);    // make room for 10 integers,
	// and initialize them to 0
	// do something with them
	for(int i=0; i<size; ++i){
		array[i] = i;
	}
	// no need to delete anything
	for(int i=0; i<size; ++i){
		std::cout<<array[i];
	}
	/* Referencing the out of index */
	std::vector<int> array_2;
	try{
	array_2.at(1000) = 0;
	}
	catch(std::out_of_range o){
	std::cout<<o.what()<<std::endl;
	}
	/* using push_back */
	std::vector<char> array_3;
	std::vector<char> array_4(10); //this is initialized with zeros so after push back the size is more than 10 always
	array_3.reserve(10);    // make room for 10 elements //not initialized so after push back the size is may or may not be more than 10 always
	char c = 0;
	while(c != 'x'){
		std::cin>>c;
		array_3.push_back(c);
		array_4.push_back('x');
	}
	 // assume we insert 13 elements ( push back 13 times)
	std::cout<<"\n array_3 Capacity is :"<<array_3.capacity(); //this will be 15 (as increased by 50% at the time of insertion of 11th element.)
	std::cout<<"\n array_3 Size is :"<<array_3.size();//this will be 13 
	for(int i=0; i<array_3.size(); ++i){
		std::cout<<array_3[i]<<"\t";
	}
	std::cout<<"\n array_4 Capacity is :"<<array_4.capacity();//this will be 33 (as increased by 50% at the time of insertion of 11th/21st element.)
	std::cout<<"\n array_4 Size is :"<<array_4.size();//this will be 10+13
	for(int i=0; i<array_4.size(); ++i){
		std::cout<<array_4[i]<<"\t";
	}
	// use of resize()
	std::vector<int> array_5;
	array_5.reserve(4);
	array_5.push_back(100); //capacity=4 size =1
	array_5.resize(6,1);////capacity=6 size =4 (as previous 4 elements are copied)
	std::cout<<"\n array_5 Capacity is :"<<array_5.capacity();
	std::cout<<"\n array_5 Size is :"<<array_5.size();
	std::cout<<"\n Array 5 contents are :";
	for(int i=0; i<array_5.size(); ++i){
		std::cout<<array_5[i]<<"\t";
	}

	return 0;
}


