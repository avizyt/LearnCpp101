	#include <iostream>
	#include <vector>

	char println1(int num)
	{
		char digit = static_cast<char>(num % 10 + '0');
		num = num / 10;
		if (num != 0)
			println1(num);
		return digit;
	}

	int main()
	{
		std::vector<int> num = { 23,432,56,456,7657,456543,987564 };
		for (int i = 0; i < num.size(); i++)
		{
			std::cout << "Base 10 of " << num[i] << " is: " << println1(num[i]) << "\n";
		}
	}
