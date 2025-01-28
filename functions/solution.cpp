#include "solution.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;


void hello_world(){
    cout << "nabla" << endl;
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> tmp = {};
    if (nums.size()==0) return result;
    subsetsSolve(nums, 0, tmp, result);
    return result;
}
void subsetsSolve(vector<int>& nums, int start, vector<int>& tmp, vector<vector<int>>& result) {
    result.push_back(tmp);
    for (int i=start; i<nums.size(); i++) {
        tmp.push_back(nums[i]);
        subsetsSolve(nums, i+1, tmp, result);
        tmp.pop_back();
    }
}

void printVector(vector<vector<int>> nums) {
    for (auto num:nums) {
        for (auto n:num) {
            cout << n << "|";
        }
        cout << endl;
    }
}