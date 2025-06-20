class Solution {
public:
    int maxDistance(string s, int k) {
      int ans = 0,north = 0,south=0,east=0,west=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'N')north++;
            if(s[i] == 'S')south++;
            if(s[i] == 'E')east++;
            if(s[i] == 'W')west++;
            int x = abs(north-south);
            int y = abs(east-west);
            int ini = x+y;
            int dis = ini + min(2*k,i+1-ini);   // i+1-ini is no of steps you wasted like going n then s 
                                                // so we calc the dist when we use k to counter this waste
            ans = max(ans,dis);
        }
        return ans;
    }
};