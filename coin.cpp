#include <iostream>
#include <vector>
#include<algorithm>
#include <functional>
using namespace std;
int main()
{
	int countofcoin;
	cin >> countofcoin;
	vector<int>twin(countofcoin);
	float plussofcoin = 0; ////مجموع العملات 
	for (int i = 0; i < countofcoin; i++)
	{
		cin >> twin[i];
		plussofcoin += twin[i];
	}
	sort(twin.begin(), twin.end(), greater<int>());
	plussofcoin /= 2;
	int count = 0;
	int sumnumber = 0;
	for (int i = 0; i < countofcoin; i++)
	{
		sumnumber += twin[i];;
		count++;
		if (sumnumber > plussofcoin)
		{
			break;
		}
	}
	cout << count;

}