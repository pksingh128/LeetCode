#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> vec{3, 2, 3, 4, 5, 2, 5}; 
    int result = 0;
    for(int i = 0; i < vec.size(); i++)  result ^= vec[i];
    cout << result;
    return 0;
}