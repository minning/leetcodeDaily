/*================================================================
*  Copyright (C) 2020 Limingyang. All rights reserved.
*  
*  FileName : solution.cpp
*    Author : Limingyang
*      Date : 2020-11-29
*      Brif : 
*
================================================================*/
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    
        int size = nums.size();

        int ret = -1;

        for(int left=0, right=size-1; left<=right; ){
            int mid = (left+right)/2;
            int n = nums[mid];

            if (n<target){ //  n target
                left = mid+1;
                ret = mid; // ret 位于目标索引左边一个的位置
            }else {
                right = mid-1;
            }
        }

        return ret+1;

    }
};
