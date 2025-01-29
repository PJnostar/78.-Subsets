/* https://leetcode.com/problems/permutations/description/ */

#ifndef SOLUTION_H
#define SOLUTION_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void hello_world();

vector<vector<int>> combine(int n, int k) ;
void combineSolve(int n, int k, int i, vector<int> &tmp, vector<vector<int>> &result) ;

// Purely recursive solution
vector<vector<int>> subsets(vector<int>& nums);
void subsetsSolve(vector<int>& nums, int i, vector<int>& tmp, vector<vector<int>>& result);
// Semi-iterative semi-recursive solution
vector<vector<int>> subsetsIterativeRecursive(vector<int>& nums);
void subsetsIterativeRecursiveSolve(vector<int>& nums, int idx, vector<vector<int>>& result);
// Purely iterative solution
vector<vector<int>> subsetsIterative(vector<int>& nums);

void printVector(vector<vector<int>> nums);

#endif