int waysToMakeFair(vector<int>& nums) {
    vector<int> prefixOdd(nums.size()), prefixEven(nums.size()), suffixOdd(nums.size()), suffixEven(nums.size());

    // initialize prefix even and prefix odd array
    prefixOdd[0] = 0, prefixEven[0] = nums[0];

    // populate prefix even and prefix odd array
    for (int i = 1; i < nums.size(); i++) {
        if (i & 1) {
            prefixOdd[i] = prefixOdd[i-1] + nums[i];
            prefixEven[i] = prefixEven[i-1];
        } else {
            prefixEven[i] = prefixEven[i-1] + nums[i];
            prefixOdd[i] = prefixOdd[i-1];
        }
    }

    // initialize suffix even and suffix odd array
    if (nums.size() & 1) {
        suffixEven[nums.size() - 1] = nums[nums.size() -1];
        suffixOdd[nums.size() - 1] = 0;
    } else {
        suffixOdd[nums.size() - 1] = nums[nums.size() -1];
        suffixEven[nums.size() - 1] = 0;
    }

    // populate suffix even and suffix odd array
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (i & 1) {
            suffixOdd[i] = suffixOdd[i+1] + nums[i];
            suffixEven[i] = suffixEven[i+1];
        } else {
            suffixEven[i] = suffixEven[i+1] + nums[i];
            suffixOdd[i] = suffixOdd[i+1];
        }
    }

    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        int leftOddSum, rightOddSum, leftEvenSum, rightEventSum;
        leftOddSum = i == 0 ? 0 : prefixOdd[i-1];
        leftEvenSum = i == 0 ? 0 : prefixEven[i-1];
        rightOddSum = i == nums.size() - 1 ? 0 : suffixOdd[i+1];
        rightEventSum = i == nums.size() - 1 ? 0 : suffixEven[i+1];

        if (leftOddSum + rightEventSum == leftEvenSum + rightOddSum) {
            count++;
        }
    }

    return count;
}
