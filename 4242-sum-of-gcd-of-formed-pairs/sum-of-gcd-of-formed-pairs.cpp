class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size(), mx=0;
        vector<int> prefixGcd(n);
        for(int i=0;i<n;i++){
            mx=max(nums[i],mx);
            prefixGcd[i]=gcd(nums[i],mx);
            
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int a=0, b=n-1;
        long long ans=0;
        while(a<b){
        ans+=gcd(prefixGcd[a],prefixGcd[b]);
        a++;
        b--; }
        return ans;

        
    }
};