vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> result(n, vector<int> (n));

    // maintain 4 boundaries: minTop, maxBottom, minRight, maxLeft
    int minTop = 0, minRight = n - 1, maxBottom = n - 1, maxLeft = 0;

    // The initial direction will be right
    string direction = "right";

    int k = 1;

    while (k <= n * n) {
        // We need to traverse along the minTop row from maxLeft column to minRight column
        // We then increment minTop column and move bottom
        if (direction == "right") {
            for (int i = maxLeft; i <= minRight; i++) {
                result[minTop][i] = k++;
            }
            minTop += 1;
            direction = "bottom";
        }

        if (direction == "bottom") {
            // We need to traverse along the minRight column from minTop row to maxBottom row
            // We then decrement minRight and move left
            for (int i = minTop; i <= maxBottom; i++) {
                result[i][minRight] = k++;
            }
            minRight -= 1;
            direction = "left";
        }

        if (direction == "left") {
            // We need to traverse along the maxBottom row from minRight column to maxLeft column
            // We then decrement maxBottom and move top
            for (int i = minRight; i >= maxLeft; i--) {
                result[maxBottom][i] = k++;
            }
            maxBottom -= 1;
            direction = "top";
        }

        if (direction == "top") {
            // We need to traverse along the maxLeft column from maxBottom row to minTop row
            // We then increment maxLeft and move right
            for (int i = maxBottom; i >= minTop; i--) {
                result[i][maxLeft] = k++;
            }
            maxLeft += 1;
            direction = "right";
        }
    }

    return result;
}
