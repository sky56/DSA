vector<int> plusOne(vector<int> &digits) {
    int i = 0;
    while (i < digits.size() && digits[i] == 0) {
        i++;
    }

    if (i == digits.size()) {
        return vector<int>{1};
    }

    vector<int> result;
    int carry = 1;

    for (int j = digits.size() - 1; j >= i; j--) {
        int sum = digits[j] + carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }

    if (carry == 1) {
        result.push_back(1);
    }

    reverse(result.begin(), result.end());

    return result;
}

