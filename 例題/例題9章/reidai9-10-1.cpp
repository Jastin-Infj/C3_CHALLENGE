#include <iostream>
int main()
{
	//これは生成できない
	auto func [] = 
	{
		[]()->void
		{
		std::cout << "攻撃!" << std::endl;
		},
		[]()->void
		{
			std::cout << "防御!" << std::endl;
		}
	};
	func[0]();
	func[1]();

}