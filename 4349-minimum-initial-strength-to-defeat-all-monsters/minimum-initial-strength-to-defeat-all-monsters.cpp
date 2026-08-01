class Solution {
public:
    bool canDefeat(vector<int> &monsters,vector <vector<int>> &boosts,long long strength){
        int n=monsters.size();
        vector<long long>diff(n+1,0);
        for(int i=0;i<boosts.size();i++){
            int l=boosts[i][0];
             int r=boosts[i][1];
             int val=boosts[i][2];
            diff[l]+=val;
            if(r+1<n){
                diff[r+1]-=val;
            }
        }
        for(int i=1;i<n;i++){
            diff[i]+=diff[i-1];
        }
        for(int i=0;i<n;i++){
            if(strength+diff[i]<monsters[i]) return false;
            strength=strength-monsters[i];
            if(strength<0) strength=0;
        }
        return true;
    }
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
       long long low=0,high=0;
        for(int i=0;i<monsters.size();i++){
            high+=monsters[i];
        }
        while(low<=high){
            long long mid=(high+low)/2;
            if(canDefeat(monsters,boosts,mid)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};