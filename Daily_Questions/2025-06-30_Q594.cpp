class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i: nums){
            freq[i]++;
        }
        int max_i=0;
        for(auto &it: freq){
            if(freq.count(it.first+1)){
                max_i=max(freq[it.first]+freq[it.first+1], max_i);
            }
        }
        return max_i;
    }
};