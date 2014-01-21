#include "BaseClass.h"
#pragma once
class DerivedClass1 : public BaseClass
{
public:
	DerivedClass1(void);
	virtual ~DerivedClass1(void);
	virtual void sayHello();
};

