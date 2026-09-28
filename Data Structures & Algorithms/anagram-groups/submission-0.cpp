class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;

        for (auto& word: strs) {
            int freq[26] = {};
            for (auto& c: word) {
                freq[c - 'a']++;
            }

            string hash;
            for (int i: freq) {
                hash += to_string(i) + "#";
            }

            groups[hash].push_back(word);
        }

        vector<vector<string>>res;
        for (const auto& [_, value] : groups) {
            res.push_back(value);
        }

        return res;
    }
};