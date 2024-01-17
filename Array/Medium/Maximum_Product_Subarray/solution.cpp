int maxProduct(vector<int>& nums) {
    int result = INT_MIN;
    int currProd = 1;

    for (int i = 0; i < nums.size(); i++) {
        currProd *= nums[i];
        result = max(result, max(currProd, nums[i]));

        if (currProd == 0) {
            currProd = 1;
        }
    }

    currProd = 1;

    for (int i = nums.size() - 1; i >= 0; i--) {
        currProd *= nums[i];
        result = max(result, currProd);

        if (currProd == 0) {
            currProd = 1;
        }
    }

    return result;
}
