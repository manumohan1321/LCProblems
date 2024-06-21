// Problem Link: https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_mpp;
        unordered_map<char, int> t_mpp;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i=0; i<s.size(); i++) {
            s_mpp[s[i]]++;
            t_mpp[t[i]]++;
        }

        for (int i=0; i<s_mpp.size(); i++) {
            if (s_mpp[i] != t_mpp[i]) {
                return false;
            }
        }

        return true;

    }
};