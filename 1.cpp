//日期:2026/10/17
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i = 0;
	int A[5] = { 5, 6, 8, 84, 19 };
	int Max = A[0];
	int Min = A[0];
	int p1 = 0, p2 = 0;
	for (i = 0; i <= 4; i++) {
		if (Max < A[i]) {
			Max = A[i];
			p1 = i;
		}
		if (Min > A[i]) {
			Min = A[i];
			p2 = i;
		}
	}
	cout << "Max is A[" << p1 << "]=" << Max << endl;
	cout << "Min is A[" << p2 << "]=" << Min << endl;
	cout << "sum is " << Max + Min << endl;
	cout << "gap is " << Max - Min << endl;
	system("pause");
	return 0;
}