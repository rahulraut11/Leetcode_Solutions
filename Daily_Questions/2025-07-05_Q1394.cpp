class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector <int> freq(501) ;
        for(int i : arr){
            freq[i]++;
        }
        for(int i = 500 ; i >0 ; i--){
            if(freq[i]==i) return i ;
        }
        return -1 ;
    }
};