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

string Consola::PrepareString(char c){
 return new char(c);
}

string Consola::PrepareString(char* c){
stringstream stream;
    string str;
    stream << c;
    stream >> str;
return str;
}

void Consola::WriteLine(char caracter)
{
    
    WriteLine(PrepareString(caracter));
}

void Consola::WriteLine(string str)
{
    str = str + "\n";
    Write(str);
}

void Consola::WriteLine(char* chrs)
{
    WriteLine(PrepareString(chrs));
}

void Consola::Write(char* chrs)
{
    Write(PrepareString(chrs));
}

void Consola::Write(char caracter)
{
    Write(PrepareString(chrs));
}

void Consola::Write(string str)
{
    printf(str.c_str());

}
