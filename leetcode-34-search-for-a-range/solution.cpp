/*================================================================
*  Copyright (C) 2020 Limingyang. All rights reserved.
*  
*  FileName : solution.cpp
*    Author : Limingyang
*      Date : 2020-11-29
*      Brif : 
*
================================================================*/
#include "solution.h"
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        int size = nums.size();
        vector<int> ret(2,-1);

        // 寻找左端点
        for(int left=0, right=size-1; left<=right; ){
            int mid = (left+right)/2;
            int n = nums[mid];

            if (n<target){  // n target 
                left = mid+1;
            }else if(n>=target){  // target n 
                right = mid-1;
                if (n==target){
                    ret[0] = mid;
                }
            }
        }

        // 寻找右端点
        for(int left=0, right=size-1; left<=right; ){
            int mid = (left+right)/2;
            int n = nums[mid];

            if (n>target){  // target n 
                right = mid-1;
            }else if(n<=target){  // n target 
                left = mid+1;
                if (n==target){
                    ret[1] = mid;
                }
            }
        }

        return ret;

    }
};
