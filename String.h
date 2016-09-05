/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String.h
 * Author: pc
 *
 * Created on 5 de septiembre de 2016, 12:22
 */

#include "Object.cpp"
#include <string>
using namespace std;

class String:public Object {
private:
	string str;
public:
	String();
	String(string string);

	~String();
	char operator [](int index);

	string ToString();
	

	bool Equals(Object obj);

	String operator+(String other);

	String operator+(string other);

	String operator+(char other);

	operator char*();

	operator string();

};
