int firstMissingPositive(vector<int> &nums) {
    int n = nums.size() + 1;

    // nullify the negative elements since they wont be part of solution
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] <= 0) {
            nums[i] = n;
        }
    }

    // perform cyclic sort and negate the elements which are present in the array
    for (int i = 0; i < nums.size(); i++) {
        int num = abs(nums[i]);
        if (num - 1 < nums.size() && nums[num - 1] > 0) {
            nums[num - 1] *= -1;
        }
    }

    // the first positive missing number will be positive at its respective index
    int result = -1, i = 0;;
    for (i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            break;
        }
    }

    return i + 1;
}

