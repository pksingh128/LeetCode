#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //for LSB ==> count no. of bits(0, 1) if no. of 1's or 0's are not in multiple of 3 is our LSB of ans.similarly for all bits from right to left
        int result = 0;
        int size = nums.size();
        for(int i = 0; i < 32; i++) {
            int count = 0;
            for(int j = 0; j < size; j++) {
                if(nums[j] & 1)     count++;
                nums[j] >>= 1;
            }
            if(count % 3 != 0)     result += 1 << i;
        }
        return result;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector <int> vec = {0,1,0,1,0,1,99};
    cout << s.singleNumber(vec);

    return 0;
}
