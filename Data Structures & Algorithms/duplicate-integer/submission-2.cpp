class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> val;
        for (int num : nums) {
            if (val.find(num) != val.end()) return true;
            val.insert(num);
        }
        return false;
    }
};