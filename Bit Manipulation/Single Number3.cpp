/*
All the bits that are set in xor will be set in one non-repeating element (x or y) and not in 
others. So if we take any set bit of xor and divide the elements of the array in two sets – one 
set of elements with same bit set and another set with same bit not set. By doing so, we will get
 x in one set and y in another set. Now if we do XOR of all the elements in the first set, we 
 will get the first non-repeating element, and by doing same in other sets we will get the second
  non-repeating element.
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int fNum = 0, sNum = 0;
        int Xor = 0, size = nums.size();
        for(int n : nums)   Xor ^= n;
        
        int k = 0;
        
        while((Xor & 1) == 0) {
            Xor = Xor >> 1;
            k++;
        }
        
        for(int i = 0; i < size; i++) {
            if((nums[i] & (1 << k)))     fNum ^= nums[i];
            else sNum ^= nums[i];
        }
        return {fNum, sNum};
    }
};