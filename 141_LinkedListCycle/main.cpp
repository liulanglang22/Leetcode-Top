/*
 * Definition for singly-linked list.
 */
#include <iostream>
#include <unordered_set>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution
{
public:
    bool hasCycle_1(ListNode *head) {
        unordered_set<ListNode*> seen;
        while (head != nullptr) {
            if (seen.count(head)) {
                return true;
            }
            seen.insert(head);
            head = head->next;
        }
        return false;
    }
    bool hasCycle_2(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode *fast = head->next;
        ListNode *slow = head;
        while (fast != slow ) {
            if (fast == nullptr || fast->next == nullptr) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }

};