#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Object
{
public:
	Object() { cout << "A" << endl; }
	~Object() { cout << "B" << endl; }
};
void output()
{
	typedef shared_ptr<Object> Objectptr;

	vector<Objectptr> objs;
	for (int i = 0; i < 2; ++i)
	{
		Objectptr obj(new Object);
		objs.push_back(obj);
	}

	cout << "===clear()呼び出し前==" << endl;
	objs.clear();
	cout << "===clear()呼び出し後==" << endl;
}
int main()
{
	output();
	system("pause");
	return 0;
}