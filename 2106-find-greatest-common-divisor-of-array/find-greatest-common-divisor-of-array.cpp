class Solution {
public:
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }return a;
}
    int findGCD(vector<int>& nums) {
        auto minimum=min_element(nums.begin(),nums.end());
        auto maximum=max_element(nums.begin(),nums.end());
        return gcd(*minimum, *maximum);
        
    }
};