#!/usr/bin/python
#-*- coding:utf-8 -*-
#================================================================
#  Copyright (C) 2020 Li Mingyang. All rights reserved.
#  
#  FileName : solution.py

class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        left = 0
        right = len(nums) -1

        ret = -1

        while(left<=right):
            mid = (left+right)/2
            n = nums[mid]

            if n<target:  # n target
                left = mid+1
                ret = mid
            elif n>=target:  # target n
                right = mid -1
        
        return ret+1
