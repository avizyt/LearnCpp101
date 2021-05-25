// Important properties of recursive algorithm
// 1) A Recursive algorithm must have a termination condition.
// 2) A Recursive algorithm must change its states , and move towards the termiantion condition.
// 3) A Recusive algorithm must call itself.

#include <iostream>
#include <vector>

using namespace std;

int factorial(int i)
{
	//termination condition
	if (i <= 1)
	{
		return 1;
	}
	// Body, recursive Expansion

	return i * factorial(i - 1);

}

int main()
{
	vector<int> arr = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "Factorial of: " << arr[i] << " is: " << factorial(arr[i]) << endl;
	}
}
