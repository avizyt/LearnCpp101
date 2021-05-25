#include <iostream>

using namespace std;
void func2()
{
	cout << "func2 line 1" << endl;
}

void func1()
{
	cout << "func1 line 1" << endl;
	func2();
	cout << "func1 line 2" << endl;
}

void main()
{
	cout << "main line 1" << endl;
	func1();
	cout << "main line 2" << endl;
	system("pause>0");
}