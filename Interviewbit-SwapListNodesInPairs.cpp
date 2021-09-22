/**
 * Definition for singly-linked list.
 * struct ListNode 
 * {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* swap(ListNode* next1, ListNode* next2) 
{
    next1->next = next2->next;
    next2->next = next1;
    return next2;
}

ListNode* Solution::swapPairs(ListNode* head) 
{
    ListNode* start = new ListNode(0); 
    start->next = head;
    ListNode *cur = start;
    while (cur->next != NULL && cur->next->next != NULL) 
    {
        cur->next = swap(cur->next, cur->next->next);
        cur = cur->next->next;
    }
    return start->next;
};
