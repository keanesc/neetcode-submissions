class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> mapS;

        for (auto& c : s) mapS[c]++;

        for (auto& c : t) mapS[c]--;

        for (auto& c : s)
            if (mapS[c] != 0) return false;

        return true;
    }
};
