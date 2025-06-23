/*
Problem: https://leetcode.com/problems/reverse-linked-list

Description: Given the head of a singly linked list, reverse the list, and return the reversed list.

Approach: Iterate through the linked list forwards, pointing each node to its previous

Time Complexity: O(n)
Space Complexity: O(1)
*/

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    while (head) {
        ListNode* next = head->next;

        head->next = prev;

        prev = head;
        head = next;
    }
    return prev;
}