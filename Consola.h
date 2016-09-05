/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Consola.h
 * Author: pc
 *
 * Created on 5 de septiembre de 2016, 12:15
 */

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


#ifndef Consola_H
#define Consola_H
class Consola
{
private:
	const int ENDBUFFER = 1;
	int sizeBuffer;
	int posRead;
	string strRead;
public:
	void WriteLine(char caracter);

	void WriteLine(string str);

	void WriteLine(char* chrs);
	

	void Write(char* chrs);

	void Write(char caracter);
	
	void Write(string str);

	string ReadLine();
	char ReadKey();

	char Read();
	



};
#endif