// Problem Link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n = arr.size();

        int largestSoFar = arr[n-1];
        arr[n-1] = -1;

        for (int i=n-2; i>=0; i--) {
            int temp = arr[i];
            arr[i] = largestSoFar;

            if (temp > largestSoFar) largestSoFar = temp;
        }

        return arr;
        
    }
};