#ifndef SOLUTION_H
#define SOLUTION_H  

#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
private:
    vector<int> p_nums;

public:
    Solution(vector<int> nums);

    vector<int> runningSum();
};

#endif