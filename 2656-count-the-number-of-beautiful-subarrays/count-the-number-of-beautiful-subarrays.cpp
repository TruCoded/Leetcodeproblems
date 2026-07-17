class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long k=0;
        long long xr=0;
        map< long long,long long>mpp;
        mpp[xr]++;
        long long cnt=0;
        for(int i=0;i<nums.size();i++){
            xr=xr^nums[i];
             long long x=xr^k;
            cnt+=mpp[x];
            mpp[xr]++;
        }
        return cnt;
        
    }
};