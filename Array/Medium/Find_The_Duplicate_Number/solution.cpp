int findDuplicate(vector<int>& nums) {
    int result;

    for (int i = 0; i < nums.size(); i++) {
        int n = abs(nums[i]);

        if (nums[n - 1] < 0) {
            result = abs(nums[i]);
            break;
        }

        nums[n - 1] *= -1;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) {
            nums[i] *= -1;
        }
    }

    return result;
}
