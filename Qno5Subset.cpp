#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function for recursion
void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
  
    result.push_back(current);
    for (int i = index; i < nums.size(); i++) {
        // Skip duplicates
        if (i > index && nums[i] == nums[i - 1]) {
            continue;
        }
        current.push_back(nums[i]); 
        generateSubsets(i + 1, nums, current, result); 
        current.pop_back(); 
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    vector<vector<int>> result;
    vector<int> current;

    generateSubsets(0, nums, current, result);

    return result;
}

// Helper function to print the result
void printResult(const vector<vector<int>>& subsets) {
    cout << "[";
    for (size_t i = 0; i < subsets.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < subsets[i].size(); j++) {
            cout << subsets[i][j];
            if (j < subsets[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < subsets.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums = {1, 1, 2};

    vector<vector<int>> result = subsetsWithDup(nums);

    printResult(result);

    return 0;
}
