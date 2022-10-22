#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> hash;
    
    for(int i = 0; i < nums.size(); i++) {
        int difference = target - nums[i];
        if (hash.count(difference)) {
            return { hash[difference], i };
        }
        hash[nums[i]] = i;
    }
    
    return vector<int>{};
}

int main() {
    vector<int> arr = {3, 2, 4};
    vector<int> result = twoSum(arr, 6);
    if (!result.empty()) {
        cout << "Indexes = " << result[0] << " and " << result[1] << endl;
    }
    return 0;
}
