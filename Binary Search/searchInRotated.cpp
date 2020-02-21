#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> vec, int low, int high, int target) {
    while(low <= high) {
        int mid = high - (high - low) / 2;

        if(vec[mid] == target)  return mid;

        else if(vec[mid] > target)  high = mid - 1;

        else low = mid + 1;
    }
    return -1;
}
int main() {
    vector <int> vec = {5, 6, 7, 8, 1, 2, 3, 4};
    int i, target = 5;
    int size = vec.size();
    for(i = 0; i < size; i++) {
        if(vec[i] > vec[i + 1]) break;
    }
    int index = binarySearch(vec, 0, i, target);
    if(index != -1) {cout << index;}

    index = binarySearch(vec, i + 1, size - 1, target);
    if(index != -1) {cout << index;}
    return 0;
}