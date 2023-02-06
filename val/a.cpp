#include "a.hpp"

#include <iostream>

a::A::A(int num)
{
	a = num;
	b = num + 2;
}

void a::A::foo()
{
	std::cout << a + b;
}
