#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast, *slow;
        fast = slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *halfHead = reverseList(slow->next);
        while(halfHead != nullptr) {
            if (halfHead->val != head->val) {
                return false;
            }
            halfHead = halfHead->next;
            head = head->next;
        }
        return true;
    }
    ListNode *reverseList(ListNode* head) {
        ListNode *pre, *cur;
        pre = nullptr;
        cur = head;
        while(cur != nullptr) {
            ListNode *tmp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = tmp;
        }
        return pre;

    }
};