//日期:2026/10/16
//學號:1150640
//姓名:蔡愷昕
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a[10] = { 10 };
	int no;
	cout << "Enter no of elements:";
	cin >> no;
	for (int i = 0; i < no; i++) {
		a[i] = i + 1 + (i + 1) * 10;
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	int se;
	cout << "Enter the number to be searched:";
	cin >> se;
	cout << "Number " << se << " is found at index:" << (se / 11) - 1 << endl;
	int dex , va;
	cout << "Enter the index to insert:";
	cin >> dex;
	cout << "Enter the value to insert:";
	cin >> va;
	for (int i = no ; i > dex; i--) {
		a[i] = a[i - 1];
	}
	a[dex] = va;
	no++;
	cout << "Print all values:";
	for (int n = 0; n <= 9; n++) {
		cout << a[n] << " ";
	}
	system("pause");
	return(0);
}