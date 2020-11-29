#!/usr/bin/python
#-*- coding:utf-8 -*-
#================================================================
#  Copyright (C) 2020 Li Mingyang. All rights reserved.
#  
#  FileName : solution.py
class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ret = [-1, -1]

        left, right = 0, len(nums)-1
        while left<=right:
            mid = (left+right)/2
            item = nums[mid]
            if item<target:
                left += 1
            elif item>=target:
                right -= 1
                if item==target:
                    ret[0] = mid
        
        left, right = 0, len(nums)-1
        while left<=right:
            mid = (left+right)/2
            item = nums[mid]
            if item>target:
                right -= 1
            elif item<=target:
                left += 1
                if item==target:
                    ret[1] = mid
        
        return ret

