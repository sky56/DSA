int secondLargest(vector<int> &nums) {
    if (nums.size() < 2) {
        return -1;
    }

    int largest = nums[0], secondLargest = -1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        } else if (nums[i] != largest && nums[i] > secondLargest) {
            secondLargest = nums[i];
        }
    }

    return secondLargest;
}
