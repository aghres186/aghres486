#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    cin >> count;  
    vector<int> v(count); 


    for (int i = 0; i < count; i++) {
        cin >> v[i];
    }

    auto max_it = max_element(v.begin(), v.end());
    int index_max = distance(v.begin(), max_it);

    
    auto min_it = min_element(v.begin(), v.end());
    int index_min = distance(v.begin(), min_it);

    int result= index_max + (count - 1 - index_min)-1;
    if (index_max > index_min) {
        result--;
    }
    if (index_min == index_max)
    {
        result = 0;
    }
    cout << result;

    return 0;
}
