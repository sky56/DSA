
vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
    int n = s.size();
    vector<int> leftMostCandles(n), rightMostCandle(n), cumulativePlatesCount(n);

    // populate cumulative plate count for an index
    cumulativePlatesCount[0] = s[0] == '*' ? 1 : 0;
    for (int i = 1; i < n; i++) {
        cumulativePlatesCount[i] = s[i] == '*' ? cumulativePlatesCount[i-1] + 1 : cumulativePlatesCount[i-1];
    }

    // populate left most candle
    leftMostCandles[0] = s[0] == '*' ? -1 : 0;
    for (int i = 1; i < n; i++) {
        leftMostCandles[i] = s[i] == '|' ? i : leftMostCandles[i-1];
    }

    // populate right most candle
    rightMostCandle[n - 1] = s[n - 1] == '*' ? -1 : 0;
    for (int i = n - 2; i >= 0; i--) {
        rightMostCandle[i] = s[i] == '|' ? i : rightMostCandle[i + 1];
    }
    
    vector<int> result;

    for (int i = 0; i < queries.size(); i++) {
        int leftQuery = queries[i][0];
        int rightQuery = queries[i][1];

        int rightCandle = rightMostCandle[leftQuery];
        int leftCandle = leftMostCandles[rightQuery];

        if (rightCandle == -1 || leftCandle == -1 || leftCandle < rightCandle) {
            result.push_back(0);
            continue;
        }

        int plates = cumulativePlatesCount[leftCandle] - cumulativePlatesCount[rightCandle];
        result.push_back(plates);
    }

    return result;
}
