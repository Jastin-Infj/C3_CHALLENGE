#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Math
{
	float ue;
	float kahen;
	float takasa;

	void Input();
	void Menseki();
};
void Math::Input()
{
	printf("上辺 :");
	scanf("%f", &ue);
	printf("下辺 :");
	scanf("%f", &kahen);
	printf("高さ :");
	scanf("%f", &takasa);
}
void Math::Menseki()
{
	float total = 0;
	total = ((ue + kahen) * takasa) / 2.f;
	printf("上辺 %.1f 下辺 %.1f 高さ %.1f の台形の面積は %.1f です", ue, kahen, takasa, total);
}
int main()
{
	Math math;
	math.Input();
	math.Menseki();
	system("pause");
}