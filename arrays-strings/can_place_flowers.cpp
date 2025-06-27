/*
Problem: https://leetcode.com/problems/can-place-flowers

Description: Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if 
    n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Approach: Iterate through the array, if both left and right are empty plant a flower and keep count. Return if count was higher than n. Immediately return
    true if n is reached.

Time Complexity: O(n)
Space Complexity: O(1)
*/

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    for (int i=0; i < flowerbed.size(); ++i) {
        if (!flowerbed[i]) {
            bool emptyLeft = (i == 0 || flowerbed[i-1] == 0);
            bool emptyRight = (i == flowerbed.size()-1 || flowerbed[i+1] == 0);
            if (emptyLeft && emptyRight) {
                ++count;
                flowerbed[i] = 1;
                if (count >= n) return true;
            }
        }
    }
    return count >= n;
}