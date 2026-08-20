class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int>freq;
        for(int num:nums)
        {
            freq[num]++;
        }

        vector<pair<int, int>>pr;
        for (auto pair:freq) {
             pr.push_back({pair.first, pair.second});
        }

        sort(pr.begin(), pr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        vector<int>result;
        for(int i=0;i<k;i++)
        {
          result.push_back(pr[i].first);
        }
        return result;
    }
};
