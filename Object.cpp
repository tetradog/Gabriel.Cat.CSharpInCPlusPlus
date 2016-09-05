#include "Stdafx.h"
#include <string>
using namespace std;
class Object {
public: 
	Object() {}
	~Object() {}
	virtual string ToString() 
	{
		return typeid(this).name();
	}
	virtual bool Equals(Object other)
	{
	     void* objThis = this;
		 void* objOther = &other;
		return objThis==objOther;
	}

};