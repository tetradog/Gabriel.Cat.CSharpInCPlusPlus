
#include "Object.cpp"
#include <string>
using namespace std;

class String:public Object {
private:
	string str;
public:
	String() { str = ""; }
	String(string string)
	{
	        str = string;
	}
	~String() {  }
	char operator [](int index)
	{
	  return str[index];
	}
	string ToString()
	{
		return str;
	}
	bool Equals(Object obj)
	{
	    return ToString() == obj.ToString();
	}
	String operator+(String other)
	{	
		return *this+other.str;	
	}
	String operator+(string other)
	{
		String total;
		total.str = str + other;
		return total;
	}
	String operator+(char other)
	{
		String total;
		total.str = str + other;
		return total;
	}
	operator char*()
	{
		char * writable = new char[str.length() + 1];
		std::copy(str.begin(), str.end(), writable);
		writable[str.length()] = '\0'; // don't forget the terminating 0
		return writable;
	}
	operator string()
	{
		return str;
	}

};