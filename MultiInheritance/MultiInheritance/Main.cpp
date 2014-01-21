#include "SubClass.h"

DerivedClass1 castToBase(SubClass deriv);

int main()
{
	SubClass* subclass = new SubClass();
	subclass->sayHello();
	SubClass sub;

	DerivedClass1 derived1;
	derived1 = castToBase(sub);
	derived1.sayHello();
	//(DerivedClass2*)subclass->sayHello();
	//(BaseClass*)subclass->sayHello();
	printf("asdf");
}

DerivedClass1 castToBase(SubClass deriv)
{
	return deriv;
}