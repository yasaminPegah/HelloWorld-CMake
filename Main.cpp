#include <iostream>

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		return 1;
	}
	std::cout << "Hello World!" << std::endl;
	std::cin.get();
	return 0;
}