/*
    PROPERTIES...
    Integers in each row are sorted from left to right.
    The first integer of each row is greater than the last integer of the previous row.
*/

class Solution {
public:
    //Serching for column Index...
    int findColumn(vector <vector<int>>& vec, int row, int column, int target) {
        int low = 0, high = row - 1;
        int mid = 0;
        
        while(low <= high) {
            mid = high - (high - low) / 2;
            
            if(vec[mid][0] <= target && vec[mid][column - 1] >= target)     break;
            
            else if(vec[mid][0] > target)   high = mid - 1;
            
            else low = mid + 1;
        }
        return mid;
    }
    //Searching for element...

    bool binarySearch(vector <int> vec, int low, int high, int target) {
        int mid = 0;
        while(low <= high) {
            mid = high - (high - low) / 2;

            if(vec[mid] == target)  return true;
            else if(vec[mid] > target)  high = mid - 1;

            else low = mid + 1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        
        if(!row)     return false;
        
        int column = matrix[0].size();
        
        if(!column)     return false;

        int columnIndex = findColumn(matrix, row, column, target);
        
        return binarySearch(matrix[columnIndex], 0, column - 1, target);
    }
};
int main() {
    Solution s;
    vector<vector<int>> matrix = {
                        {1,   3,  5,  7},
                        {10, 11, 16, 20},
                        {23, 30, 34, 50}};
    int target;
    while(1) {
        cin >> target;
        cout << s.searchMatrix(matrix, target);
    }

    return 0;
}