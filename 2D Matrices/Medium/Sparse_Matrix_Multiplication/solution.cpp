vector<vector<int> > multiply(vector<vector<int> > &mat1, vector<vector<int> > &mat2) {
    vector<vector<int>> result(mat1.size(), vector<int> (mat2[0].size()));

    for (int i = 0; i < mat1.size(); i++) {
        for (int j = 0; j < mat2[0].size(); j++) {
            int sum = 0;
            for (int k = 0; k < mat2.size(); k++) {
                sum += (mat1[i][k] * mat2[k][j]);
            }

            result[i][j] = sum;
        }
    }

    return result;
}

