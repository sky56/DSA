int maxChunksToSorted(vector<int> &arr) {
    int count = 0, maxNum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        maxNum = max(maxNum, arr[i]);

        if (maxNum == i) {
            count++;
            maxNum = INT_MIN;
        }
    }

    return count;
}
