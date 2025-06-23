/*
Problem: https://leetcode.com/problems/move-zeroes

Description: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Approach: Hold two pointers such that all elements between i and j are zeroes. If i encounters a nonzero value, move it to j.

Time Complexity: O(n)
Space Complexity: O(1)
*/

void moveZeroes(vector<int>& nums) {
    for (int i=0, j=0; i < nums.size(); ++i) {
        if (nums[i] != 0) swap(nums[j++], nums[i]);
    }
}