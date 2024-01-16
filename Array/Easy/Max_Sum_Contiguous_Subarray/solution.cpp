int maxSubArray(vector<int>& nums) {
    int result = INT_MIN, currSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        result = max(result, currSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }

    return result;  
}
