#include <string>
#include <vector>
using namespace std;
class Emplyoee
{
	int no;				//社員番号
	string name;		//名前
	string department;  //部門
};
class Manager : public Emplyoee
{
	//Emplyoee employeeInfo;
	vector<Emplyoee*> group;
};
int main()
{
	vector<Emplyoee*>objs;
	objs.push_back(new Emplyoee);
	objs.push_back(new Manager);
	for (size_t i = 0; i < objs.size(); ++i)
	{
		delete objs[i];
	}
}
