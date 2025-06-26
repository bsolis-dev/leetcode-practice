/*
Problem: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

Description: Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the 
    greatest number of candies among all the kids, or false otherwise.

Approach: Iterate once to find the max, then iterate again to find which kids, if given all the candy, have at least the max.

Time Complexity: O(n)
Space Complexity: O(1)
*/

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int most = 0;
    for (int i=0; i < candies.size(); ++i) if (candies[i] > most) most = candies[i];

    vector<bool> result(candies.size());
    for (int i=0; i < candies.size(); ++i) result[i] = (candies[i]+extraCandies >= most);

    return result;
}