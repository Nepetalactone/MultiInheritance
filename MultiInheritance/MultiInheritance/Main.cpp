#include "SubClass.h"

int main()
{
	SubClass* subclass = new SubClass();
	subclass->sayHello();

	DerivedClass1* derived1 = dynamic_cast<DerivedClass1*>(subclass);
	derived1->sayHello();
	//(DerivedClass2*)subclass->sayHello();
	//(BaseClass*)subclass->sayHello();
	printf("asdf");
}