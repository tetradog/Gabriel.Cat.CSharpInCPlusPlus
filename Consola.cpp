#include "Consola.h"


char Consola::Read()
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
    else if (posRead < strRead.length())
    {

        caracter = strRead[posRead];
    }
    else
    {
        if (posRead == strRead.length())
        {
            caracter = '\n';

            sizeBuffer = ENDBUFFER;
        }
    }
    posRead++;
    return caracter;
}

char Consola::ReadKey()
{
    char c;
    std::cin.get(c);
    return c;
}

string Consola::ReadLine()
{

    string line;
    getline(cin, line);
    return line;
}

void Consola::WriteLine(char caracter)
{
    stringstream stream;
    string str;
    stream << caracter;
    stream >> str;
    WriteLine(str);
}

void Consola::WriteLine(string str)
{
    str = str + "\n";
    Write(str);
}

void Consola::WriteLine(char* chrs)
{
    stringstream stream;
    string str;
    stream << chrs;
    stream >> str;
    WriteLine(str);
}

void Consola::Write(char* chrs)
{
    stringstream stream;
    string str;
    stream << chrs;
    stream >> str;
    Write(str);
}

void Consola::Write(char caracter)
{
    stringstream stream;
    string str;
    stream << caracter;
    stream >> str;
    Write(str);
}

void Consola::Write(string str)
{
    printf(str.c_str());

}
