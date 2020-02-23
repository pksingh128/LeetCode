#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int result;
        int low, high;
        low = 0, high = x;
        int mid;
		while(low <= high) {
            mid = high - (high - low) / 2;
            
			/*
				expression mid*mid will leads to an overflow condion. instead of mid*mid
				equivalent will be mid == (x / mid).
				
			*/
            if((mid * mid) == x)  return mid;
            
            else if((mid * mid) > x) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
                result = mid;
            }
        }
    return result;
    }
};
int main() {
	Solution s;
	int ele;
	cin >> ele;
	cout << s.mySqrt(ele);
	return 0;	
}