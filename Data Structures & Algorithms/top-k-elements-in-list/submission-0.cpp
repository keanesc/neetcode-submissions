class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        unordered_map<int, int> freqMap;
        for (int n : nums) {
            freqMap[n]++;
        }

        for (auto& [val, freq] : freqMap) {
            pq.emplace(freq, val);

            if (pq.size() > k) pq.pop();
        }

        vector<int> res;
        while (!pq.empty()) {
            int val = pq.top().second;
            res.push_back(val);
            pq.pop();
        }

        return res;
    }
};
