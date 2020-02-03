#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector <int> vec;

    copy(arr, arr + 9, vec.begin());

    for(int i = 0; i < vec.size(); i++)     cout << vec[i] << " ";
    return 0;
}