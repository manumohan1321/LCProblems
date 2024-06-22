// Problem link: https://leetcode.com/problems/pascals-triangle/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> res;
        res.push_back({1});

        for (int i=1; i<numRows; i++) {
            vector<int> currentRow;
            vector<int> &previousRow = res[i-1];

            currentRow.push_back(1);

            for (int j=1; j<i; j++) {
                currentRow.push_back(previousRow[j-1] + previousRow[j]);
            }

            currentRow.push_back(1);

            res.push_back(currentRow);
        }
        
        return res;
    }
};