#include "Solution.h"

Solution::Solution(vector<int> nums) {
    p_nums = nums;
}

vector<int> Solution::runningSum() {

    for(int i=0; i<p_nums.size(); i++){
            if(i==0){
                p_nums[i] = p_nums[i];
            }
            else{
                p_nums[i] = p_nums[i-1] + p_nums[i];
            }
        }

    return p_nums;
}