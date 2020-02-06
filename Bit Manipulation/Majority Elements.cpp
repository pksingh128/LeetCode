#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int bits = 32;
        long long result = 0;
        int size = nums.size();
        
        for(int i = 0; i < bits; i++) {
            for(int j = 0; j < size; j++) {
                if(nums[j] & 1 == 1)    count++;
                nums[j] = nums[j] >> 1;
            }
            if(2 * count > size) {
                result += (1 << i);
            }
            count = 0;
        }
        return result;
    }
};