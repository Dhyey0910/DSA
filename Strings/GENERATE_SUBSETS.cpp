#include <iostream>
#include <vector>
using namespace std;

// Generate all subsets
void generate(int index, vector<int>& current,
              vector<vector<int>>& result, vector<int>& nums) {

    if (index == nums.size()) {
        result.push_back(current);
        return;
    }

    // Include current element
    current.push_back(nums[index]);
    generate(index + 1, current, result, nums);

    // Exclude current element
    current.pop_back();
    generate(index + 1, current, result, nums);
}

int main() {

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;
    vector<int> current;

    generate(0, current, result, nums);

    // Print the subsets
    for (const auto& subset : result) {
        cout << "{ ";

        for (int num : subset) {
            cout << num << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}