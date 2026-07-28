class Solution {
public:
bool possible(vector<int> &arr, int day, int p, int k) {
int cnt = 0;
int noOfB = 0;
for (int i = 0; i < arr.size(); i++) {
if (arr[i] <= day) {
cnt++;
}
else {
noOfB += (cnt / k);
cnt = 0;
}
}
noOfB += (cnt / k);
return noOfB >= p;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
if (1LL * k * m > bloomDay.size())
return -1;

int low = INT_MAX;
int high = INT_MIN;

for (int i = 0; i < bloomDay.size(); i++) {
low = min(low, bloomDay[i]);
high = max(high, bloomDay[i]);
}

while (low <= high) {
int mid = (low + high) / 2;

if (possible(bloomDay, mid, m, k)) {
high = mid - 1;
}
else {
low = mid + 1;
}
}

return low;
}
    };