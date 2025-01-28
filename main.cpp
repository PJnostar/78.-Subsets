#include "functions/solution.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "================================" << endl;
    vector<int> n = {1,2,3};
    vector<vector<int>> result = subsets(n);
    printVector(result);
    cout << "is done" << endl;

}
