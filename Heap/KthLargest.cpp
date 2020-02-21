#include <iostream>
#include <vector>
#include "./heap.cpp"

using namespace std;
int main() {
    int k = 5;
    int size;
    vector <int> vec = {4, 1, 7, 6, 0, 8};
    size = vec.size();
    for(int i = 0; i < size; i++) heapify(vec, i);

       
    for(auto i : vec)   cout << i << " ";

    cout << "\n";

    while (size != 0)
    {
        swap(vec[0], vec[size - 1]);
        size--;
        perculate(vec, 0, size);
    }
    return 0;
}