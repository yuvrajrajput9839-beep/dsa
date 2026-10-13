class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> prefixSumCount;
        int currentSum = 0;
        int count = 0;
        
        prefixSumCount[0] = 1;
        
        for (int num : nums) {
            currentSum += num;
            
            int target = currentSum - k;
            
            if (prefixSumCount.find(target) != prefixSumCount.end()) {
                count += prefixSumCount[target];
            }
            
            prefixSumCount[currentSum]++;
        }
        
        return count;
    }
};