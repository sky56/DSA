vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefixProduct(n, 1), suffixProduct(n, 1);

    prefixProduct[0] = nums[0], suffixProduct[n - 1] = nums[n - 1];

    for (int i = 1; i < n; i++) {
        prefixProduct[i] = nums[i] * prefixProduct[i-1];
    }

    for (int i = n - 2; i >= 0; i--) {
        suffixProduct[i] = nums[i] * suffixProduct[i+1];
    }

    vector<int> result;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            result.push_back(suffixProduct[i+1]);
            continue;
        }
        
        if (i == n - 1) {
            result.push_back(prefixProduct[i-1]);
            continue;
        }
        
        result.push_back(prefixProduct[i-1] * suffixProduct[i+1]);
    }

    return result;
}
