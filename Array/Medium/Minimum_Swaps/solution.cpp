int minimumSwaps(vector<int> &arr, int k) {
    int lessThanK = 0, maxResult = 0, lessThanKInRange = 0;

    // count the number of elements less than k
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= k) {
            lessThanK++;
        }
    }

    // maintain a sliding window of size lessThanK and calculate the number of elements less than k in each window
    // compute the maximum value of elements less than k in each window
    for (int i = 0; i < lessThanK; i++) {
        if (arr[i] <= k) {
            lessThanKInRange++;
        }
    }

    maxResult = lessThanKInRange;

    for (int i = 1; i <= arr.size() - lessThanK; i++) {
        int j = i + lessThanK - 1;
        if (arr[i-1] <= k) {
            lessThanKInRange--;
        }
        if (arr[j] <= k) {
            lessThanKInRange++;
        }

        maxResult = max(maxResult, lessThanKInRange);
    }

    // the minimum swaps will be lessThanK - maximum number of elements less than k in each window
    return (lessThanK - maxResult);
}

