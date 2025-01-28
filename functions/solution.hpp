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

vector<vector<int>> subsets(vector<int>& nums);
void subsetsSolve(vector<int>& nums, int i, vector<int>& tmp, vector<vector<int>>& result);

void printVector(vector<vector<int>> nums);

#endif