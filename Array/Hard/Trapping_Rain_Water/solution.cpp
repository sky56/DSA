vector<int> populateLeftBoundary(vector<int> height, vector<int> leftBoundary) {
    int currheight = -1, n = height.size();

    for (int i = 1; i < n; i++) {
        leftBoundary[i] = currheight;
        currheight = max(currheight, height[i]);
    }

    return leftBoundary;
}

vector<int> populateRightBoundary(vector<int> height, vector<int> rightBoundary) {
    int currheight = -1, n = height.size();

    for (int i = n - 2; i >= 0; i--) {
        rightBoundary[i] = currheight;
        currheight = max(currheight, height[i]);
    }

    return rightBoundary;
}


int trap(vector<int>& height) {
    int n = height.size();

    vector<int> leftBoundary(n, {-1});
    vector<int> rightBoundary(n, {-1});

    leftBoundary = populateLeftBoundary(height, leftBoundary);
    rightBoundary = populateRightBoundary(height, rightBoundary);

    int waterCount = 0;

    for (int i = 0; i < n; i++) {
        if (leftBoundary[i] < 0 || rightBoundary[i] < 0) {
            continue;
        }

        waterCount += max((min(leftBoundary[i], rightBoundary[i]) - height[i]), 0);
    }

    return waterCount;
}
