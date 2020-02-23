#include <iostream>
#include <vector>
#include "./heap.cpp"

using namespace std;
int main() {
    int k = 2;
    int size;
    vector <int> vec = {5, 1, 4, 9, 0, 6, 1, 6, 7, 89};
    size = vec.size();
    for(int i = 0; i < size; i++) heapify(vec, i);

       
    for(auto i : vec)   cout << i << " ";

    cout << "\n";

    while (k != 0)
    {
        swap(vec[0], vec[size - 1]);
        size--;
        k--;
        perculate(vec, 0, size);
    }
    for(int n : vec)    cout << n << " ";
    return 0;
}