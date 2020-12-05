#include <iostream>
#include <vector>
#include "Solution.cpp"

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    
    Solution testSol(nums);

    nums = testSol.runningSum();

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}