#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int count;
	cin >> count;
	int result = 0;
	while (true)
	{
		if (count >=100)
		{
			count -= 100;
			result++;
			if (count == 0)
			{
				break;
			}
		}
		else if (count >=20)
		{
			count -= 20;
			result++;
			if (count == 0)
			{
				break;
			}
		}
		else if (count >= 10)
		{
			count -= 10;
			result++;
			if (count == 0)
			{
				break;
			}
		}
		else if (count >= 5)
		{
			count -= 5;
			result++;
			if (count == 0)
			{
				break;
			}
		}
		else if (count >= 1)
		{
			count -= 1;
			result++;
			if (count == 0)
			{
				break;
			}
		}

	}
	cout << result;
}