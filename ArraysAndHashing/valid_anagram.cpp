// LC 242
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> mpp;

        for(char c : s) {
            mpp[c] += 1;
        }

        for(char c : t) {
            mpp[c] -= 1;
        }

        for (auto& it: mpp) {
            if (it.second != 0) return false;
        }

        return true;
    }
};