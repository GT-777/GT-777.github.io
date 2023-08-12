#include <iostream>
template <int t>

int add()
{
	return t + t;

}

int main()
{
	int r = add<4>();
	std::cout << r;
}