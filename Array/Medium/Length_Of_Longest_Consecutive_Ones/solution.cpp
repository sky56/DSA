int lengthOfLongestConsecutiveOnes(string S) {
    int count1 = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '1') {
            count1++;
        }
    }

    if (count1 == 0) {
        return 0;
    }

    if (count1 == S.size()) {
        return count1;
    }

    int leftCount1 = 0, rightCount1 = 0, result = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '0') {
            int j = i - 1, k = i + 1;
            while (j >= 0 && S[j] == '1') {
                leftCount1++;
                j--;
            }

            while (k < S.size() && S[k] == '1') {
                rightCount1++;
                k++;
            }

            if (count1 > (leftCount1 + rightCount1)) {
                result = max(result, (leftCount1 + rightCount1 + 1));
            } else {
                result = max(result, (leftCount1 + rightCount1));
            }
        }

        leftCount1 = rightCount1 = 0;
    }

    return result;
}

