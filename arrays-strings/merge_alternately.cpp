/*
Problem: https://leetcode.com/problems/merge-strings-alternately

Description: Given two strings word1 and word2, merge them by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Approach: Iterate max(m, n) times, appending the ith character of word1 and word2 (if any left)

Time Complexity: O(m + n)
Space Complexity: O(1)
*/

string mergeAlternately(string word1, string word2) {
    // Reserve String
    int n = word1.size();
    int m = word2.size();
    string result;
    result.reserve(m + n);
    
    // Merge Alternately
    for (int i=0; i < max(m, n); ++i) {
        if (i < n) result.push_back(word1[i]);
        if (i < m) result.push_back(word2[i]);
    }

    return result;
}