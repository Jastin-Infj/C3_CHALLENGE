#include <iostream>
#include <functional>

void func(int i)
{
	std::cout << __FUNCTION__ << i << std::endl;
}
int main()
{
	//関数の代入
	std::function<void(int)> f = func;
	f(123);
	system("pause");
}