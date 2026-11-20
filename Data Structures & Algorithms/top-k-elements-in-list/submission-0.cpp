class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapNum;  // no push_back
        vector<pair<int, int>> v;

        for (int i = 0; i < nums.size(); i++) {
            mapNum[nums[i]]++;  // loop thru the nums array and add 1 for count
        }

        for (auto& pair : mapNum) {
            v.push_back({pair.second, pair.first});
        }

        sort(v.rbegin(), v.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(v[i].second);
        }

        return result;
    }
};
