#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	vector<int>v{ a + b * c, a * (b + c), a * b * c, (a + b) * c ,a+b+c};
	auto max = max_element(v.begin(), v.end());
	int maxx = distance(v.begin(), max);
	cout << v[maxx] << endl;


}