class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        long long n=matrix.size();
        for(long long i=0;i<n-1;i++){
            for(long long j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(long long i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};