vector<int> continuousSumQuery(int A, vector<vector<int> > &B) {
    vector<int> diffArray(A, 0), result(A);

    for (int i = 0; i < B.size(); i++) {
        int L = B[i][0], R = B[i][1], P = B[i][2];

        diffArray[L - 1] += P;
        if (R < A) {
            diffArray[R] -= P;
        }
    }

    result[0] = diffArray[0];

    for (int i = 1; i < A; i++) {
        result[i] = result[i-1] + diffArray[i];
    }

    return result;
}

