/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Object.h
 * Author: pc
 *
 * Created on 5 de septiembre de 2016, 12:22
 */

#include <stdio.h>
#include <typeinfo>
#include <string>
using namespace std;
class Object {
public: 
	virtual string ToString();
	
	virtual bool Equals(Object other);
	

};
