class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int count = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            const char c = s[right];
            
            while (seen.find(c) != seen.end()) {
                seen.erase(s[left]);
                left++;
            }
            
            seen.insert(c);
            count = max(count, right - left + 1);
        }

        return count;
    }
};
