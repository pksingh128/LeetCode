#include <iostream>
#include <vector>
using namespace std;

int count(vector <int> vec) {
    int count = 0;
    int low = 0, high = vec.size() - 1;

    while(low <= high ){
        int mid = high - (high - low) / 2;
        if(vec[mid] < 0) {
            count = count + high - mid + 1;
            cout << count << endl;
            high = mid - 1;
        }
        else    low = mid + 1;

    }
    return count;
}
int main() {
    vector <int> vec = {9, 8, 6, 5, 4, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -16};
    cout << count(vec);
    return 0;
}