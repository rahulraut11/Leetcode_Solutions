class FindSumPairs {
private:
    vector<int> a , b ;
    unordered_map<int, int> freq;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        a = nums1;
        b = nums2;
        for(int i : b){
            freq[i]++ ;
        }
    }
    
    void add(int index, int val) {
        freq[b[index]]-- ;
        b[index] += val;
        freq[b[index]]++ ;
    }
    
    int count(int tot) {
        int cnt = 0 ;
        for(int i = 0 ; i < a.size() ; i++){
            if(freq[tot - a[i]]!=0) cnt+=freq[tot - a[i]]  ;
        }
        return cnt ;
    }
};
