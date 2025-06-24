#include <iostream>
using namespace std;
int main()
{
	int Count_Room;
	int nRoom;//الاشخاص الي ف الغرف
	int cRoom;//السعه
	cin >> Count_Room;
	int result=0;
	for (int i = 0; i < Count_Room; i++)
	{
		cin >> nRoom >> cRoom;
		if (cRoom - nRoom >= 2)
		{
			result++;
		}
		else {
			if (result > 0)
			{
				result++;
				result--;
			}
			
		}
	}
	cout << result;
}