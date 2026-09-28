class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            
            if (seen.find(curr) != seen.end()) 
                return {seen[curr], i};

            seen[target - curr] = i;
        }

        return {};
    }
};
