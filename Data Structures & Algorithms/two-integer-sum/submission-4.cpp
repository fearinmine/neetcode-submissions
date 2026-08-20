class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hashmap;

        for ( int i = 0; i < (int)nums.size(); i++){
            int t = target - nums[i];
            
            if (hashmap.count(t)){
                return {min(i, hashmap[t]), max(i, hashmap[t])};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
