vector<int> majorityElement(vector<int>& nums) {
    // Since we need elements having frequency greater than N/3, therefore according to Moore Voting Algorithm,
    // maximum of 2 elements can contribute to the solution.
    int majorityElementFirst = INT_MAX, majorityElementSecond = INT_MAX, majorityElementCounterFirst = 0, majorityElementCounterSecond = 0;

    // Voting algorithm to select the first and second majority element
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == majorityElementFirst){
            majorityElementCounterFirst++;
            continue;
        }
        
        if (nums[i] == majorityElementSecond) {
            majorityElementCounterSecond++;
            continue;
        }
        
        if (majorityElementCounterFirst == 0) {
            majorityElementFirst = nums[i];
            majorityElementCounterFirst = 1;
            continue;
        }
        
        if (majorityElementCounterSecond == 0) {
            majorityElementSecond = nums[i];
            majorityElementCounterSecond = 1;
            continue;
        }
        
        majorityElementCounterFirst--;
        majorityElementCounterSecond--;
    }

    majorityElementCounterFirst = majorityElementCounterSecond = 0;

    // Count the actual frequency of the proabable majority elements
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == majorityElementFirst) {
            majorityElementCounterFirst++;
        } else if (nums[i] == majorityElementSecond) {
            majorityElementCounterSecond++;
        }
    }

    vector<int> result;

    // Pushing element into the result if majority element is verified
    if (majorityElementCounterFirst > nums.size() / 3) {
        result.push_back(majorityElementFirst);
    }

    if (majorityElementCounterSecond > nums.size() / 3) {
        result.push_back(majorityElementSecond);
    }

    return result;
}
