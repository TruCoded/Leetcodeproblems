class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        int presum = nums[0];

        // Finding longest prefix sequential sum
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1)
                presum += nums[i];
            else
                break;
        }

        vector<bool> hashTable(1276, false);

        // Filling hash table
        for (int i = 0; i < n; i++) {
            hashTable[nums[i]] = true;
        }

        // Finding the missing integer
        while (hashTable[presum]) {
            presum++;
        }

        return presum;
    }
};