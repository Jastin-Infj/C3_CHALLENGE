#include <iostream>
using namespace std;
class Sample
{
public:
	static void type() { cout << "Sample" << endl; }
};
int main()
{
	Sample::type();	//宣言しなくてもメソッドを呼べる
	system("pause");
	return 0;
}