int maxScore(vector<int> &cardPoints, int k) {
    int currSum = 0, maxSum = INT_MIN;

    // make a sliding window sum for the first k elements
    for (int i = 0; i < k; i++) {
        currSum += cardPoints[i];
    }

    maxSum = currSum;

    // iterate through the window in reverse order to remove the element from the window and add from the end
    for (int i = k - 1; i >= 0; i--) {
        currSum -= cardPoints[i];
        currSum += cardPoints[cardPoints.size() - k + i];

        maxSum = max(maxSum,currSum);
        
    }
    return maxSum;
}
