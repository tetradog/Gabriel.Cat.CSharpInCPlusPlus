#include "stdafx.h"
#include<iostream>
#include <string>
#include <sstream>
using namespace std;

class Consola
{
private:
	const int ENDBUFFER = 1;
	int sizeBuffer;
	int posRead;
	string strRead;
public:

	Consola() { strRead = ""; posRead = 0; sizeBuffer = ENDBUFFER; }
	~Consola() {  }
	void WriteLine(char caracter)
	{
		stringstream stream;
		string str;
		stream << caracter;
		stream >> str;
		WriteLine(str);
	}
	void WriteLine(string str)
	{
		str = str + "\n";
		Write(str);
	}
	void WriteLine(char* chrs)
	{
		stringstream stream;
		string str;
		stream << chrs;
		stream >> str;
		WriteLine(str);
	}

	void Write(char* chrs)
	{
		stringstream stream;
		string str;
		stream << chrs;
		stream >> str;
		Write(str);
	}
	void Write(char caracter)
	{
		stringstream stream;
		string str;
		stream << caracter;
		stream >> str;
		Write(str);
	}
	void Write(string str)
	{
		printf(str.c_str());
	}

	string ReadLine()
	{
		string line;
		getline(cin, line);
		return line;
	}
	char ReadKey()
	{
		char c;
		std::cin.get(c);
		return c;
	}
	char Read()
	{
		char caracter;
		//si no hay string 
		if (sizeBuffer == ENDBUFFER)
		{
			strRead = ReadLine();
			sizeBuffer = strRead.length() + ENDBUFFER;
			posRead = 0;
			caracter = strRead[posRead];
		}
		else if (posRead < strRead.length()) {

			caracter = strRead[posRead];
		}
		else {
			if (posRead == strRead.length())
			{	caracter = '\n';
		
				sizeBuffer = ENDBUFFER;
			}
		}
		posRead++;
		return caracter;

	}




};