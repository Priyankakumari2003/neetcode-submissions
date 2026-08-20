class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int>sum;
    for(int i=0; i<nums.size();i++)
    {
       int compliments = target - nums[i];
       if(sum.find(compliments) != sum.end())
       {
        return {sum[compliments],i};
       }
       sum[nums[i]] = i;
    }
        return {};
    }
};
