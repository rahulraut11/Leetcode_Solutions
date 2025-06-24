class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (abs(i - j) <= k && nums[j] == key)
                    if (find(ans.begin(), ans.end(), i) == ans.end()) {
                        ans.push_back(i);
                    }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};