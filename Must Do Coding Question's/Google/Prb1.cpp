//Maximum sum subarray having window size K...
//SLIDING WINDOW TECHNIQUE ...

//STATIC LENGHT...(K size Window)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumSubarray(vector<int> vec, int k) {
    int maxSum = INT32_MIN; 
    int currentSum = 0;

    for(int i = 0; i < vec.size(); i++) {
        currentSum += vec[i];

        if(i >= k - 1) {
            maxSum = max(currentSum, maxSum);
            currentSum -= vec[i - (k - 1)];
        }
    }
    return maxSum;
}
int main() {
    vector<int> vec = {5, 3, 1, 9, -7, 3, 5, 0, 89};
    cout << maxSumSubarray(vec, 10);
    return 0;
}