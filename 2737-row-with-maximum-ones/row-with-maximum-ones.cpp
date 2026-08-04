class Solution {
public:
    int lowerBound(vector<int> arr,int n,int x){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                cnt++;
            }
        }
        return cnt;
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        int cnt_max=0;
        int index=0;

        for(int i=0;i<n;i++){
            int cnt_ones=lowerBound(mat[i],m,1);
            if(cnt_ones>cnt_max){
                cnt_max=cnt_ones;
                index=i;
            }
        }

        return {index,cnt_max};
    }
};