int pickFromBothSides(vector<int> &nums, int K) {
    vector<int> prefixSum(nums.size()), suffixSum(nums.size());

    prefixSum[0] = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    int maxSum = INT_MIN, startIndex = -1;

    for (int i = nums.size() - K; i <= nums.size(); i++) {
        int leftSum = startIndex == -1 ? 0 : prefixSum[startIndex];
        int rightSum = i == nums.size() ? 0 : prefixSum[A.size() - 1] - prefixSum[i-1];

        maxSum = max(maxSum, (leftSum + rightSum));
        startIndex++;
    }

    return maxSum;
}
