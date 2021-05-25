#include <iostream>
#include <vector>

void towerOfHanoi(int num, char src, char dst, char temp)
{
	if (num < 1)
	{
		return;
	}
	towerOfHanoi(num - 1, src, temp, dst);
	std::cout << "Move " << num << " disk from peg " << src << " to peg " << dst << std::endl;
	towerOfHanoi(num - 1, temp, dst, src);
}

int main()
{
	int num = 4;
	std::cout << "The sequence of moves involved in the Tower of Hanoi are: " << std::endl;
	towerOfHanoi(num, 'A', 'C', 'B');
	return 0;

	system("pause>0");
}