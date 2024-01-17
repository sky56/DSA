int min_cost_triplet(vector<int> &arr, vector<int> &cost) {
    int leftMin = INT_MAX, rightMin = INT_MAX, result = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        int j = i - 1, k = i + 1;

        while (j >= 0) {
            if (arr[j] < arr[i]) {
               leftMin = min(leftMin, cost[j]); 
            }
            j--;
        }

        while (k < arr.size()) {
            if (arr[k] > arr[i]) {
                rightMin = min(rightMin, cost[k]);
            }
            k++;
        }

        if (leftMin != INT_MAX && rightMin != INT_MAX) {
            result = min(result, (leftMin + rightMin + cost[i]));
        }

        leftMin = rightMin = INT_MAX;
    }

    if (result == INT_MAX) {
        return -1;
    }

    return result;
}

