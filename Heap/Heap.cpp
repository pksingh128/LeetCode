#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void heapify(vector <int>& vec, int index) {
    if(index == 0)  return;

    else {
        if(vec[(index - 1) / 2] < vec[index]) {
            swap(vec[(index - 1) / 2], vec[index]);
            heapify(vec, (index - 1) / 2);
        }
    }
}
int main() {
    vector <int> vec = {4, 1, 6, 3, 9, 0, 12};
    int size = vec.size();
    for(int i = 0;i < size; i++) {
        heapify(vec, i);
    }
    return 0;
}