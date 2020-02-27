// Min Window size which satisfies the condition...
// (sum of min size subarray) >= S (value provided by user)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int minSubarraySize(vector<int> vec, int s) {
    int minSize = INT32_MAX;
    int windowStart = 0;
    int currentSum = 0;

    for(int i = 0; i < vec.size(); i++) {
        currentSum += vec[i];
        while(currentSum >= s && windowStart < vec.size()) {
            minSize = min(i - windowStart + 1, minSize);
            if(minSize == 1)    return minSize;

            currentSum -= vec[windowStart];
            windowStart++;
        }
    }
    return (minSize == INT32_MAX) ? -1 : minSize;
} 

int main() {
    vector<int> vec = {5, 3, 1, 9, -7, 3, 5, 0, 7};
    int s;
    cin >> s;
    cout << minSubarraySize(vec, s);
    return 0;
}