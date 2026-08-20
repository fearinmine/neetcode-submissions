class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for (int x : nums) {
            if (a.count(x)) {
                return true;
            }
            a.insert(x);
        }
        return false;
    }
};