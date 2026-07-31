class Solution {
public:
        int countstud(vector<int>&arr,int pages){
    int stud=1;
    long long pagesstud=0;
    for(int i=0;i<arr.size();i++){
        if(pagesstud+arr[i]<=pages){
            pagesstud+=arr[i];
        }
        else{
            stud+=1;
            pagesstud=arr[i];
        }
    }
    return stud;
}
int findPages(vector<int>& arr, int n, int m) {
if(m>n) return -1;
int low=*max_element(arr.begin(),arr.end());
int high=accumulate(arr.begin(),arr.end(),0);
while(low<=high){
    int mid=(high+low)/2;
    int stud=countstud(arr,mid);
    if(stud>m) {low=mid+1;}
    else{ high=mid-1;}
}
return low;
}
int splitArray(vector<int>& nums, int k) {
return findPages(nums,nums.size(),k);

    }
};