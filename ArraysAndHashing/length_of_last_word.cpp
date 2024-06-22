// Problem Link: https://leetcode.com/problems/length-of-last-word/

#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int n = s.size();
        int length = 0;
        while (n>0 && s[n-1] == ' ') n--;

        while (n>0 && s[n-1] != ' ') {
            length++;
            n--;
        }

        return length;
    }
};