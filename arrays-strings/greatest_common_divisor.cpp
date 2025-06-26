/*
Problem: https://leetcode.com/problems/greatest-common-divisor-of-strings

Description: Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Approach: If str1 and str2 have a GCD then both strings would be multiple copies of a base string. Thus, the order of the concatenations of the strings
    would not matter. Therefore, str1 and str2 only have a GCD if str1+str2 == str2+str1 and the GCD would be a prefix of str1/str2. And the length of
    the prefix would be the GCD of the lengths of the strings.

Time Complexity: O(m + n)
Space Complexity: O(m + n)
*/

string gcdOfStrings(string str1, string str2) {
    if (str1+str2 != str2+str1) return "";
    int n = gcd(str1.size(), str2.size());
    return str1.substr(0, n);
}