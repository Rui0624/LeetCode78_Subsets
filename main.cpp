//
//  main.cpp
//  LeetCode78_Subsets
//
//  Created by Rui on 1/22/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res(1);
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int size = res.size();
            for(int j = 0; j < size; j++)
            {
                res.push_back(res[j]);
                res.back().push_back(nums[i]);
            }
        }
        
        return res;
    }
};
