#include "DerivedClass1.h"
#include "DerivedClass2.h"
#pragma once
class SubClass : public DerivedClass1, public DerivedClass2
{
public:
	SubClass(void);
	~SubClass(void);
	void sayHello();
};

