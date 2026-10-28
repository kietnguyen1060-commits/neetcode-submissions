class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int x : nums) {
            if (seen.count(x)) return true;  // gặp lại số đã thấy -> có lặp
            seen.insert(x);
        }
        return false;
    }
};