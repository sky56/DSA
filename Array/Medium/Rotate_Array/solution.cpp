// Helper function to reverse the array
void reverseArr(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    reverseArr(nums, 0, n - 1);
    reverseArr(nums, 0, k - 1);
    reverseArr(nums, k, n - 1);
}
