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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p, *q;
        p = head;
        ListNode *pre = new ListNode(0, head);
        q = pre;
        for (int i = 0; i < n; ++i) {
            p = p->next;
        }
        while(p) {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return pre->next;
    }
};
int main() {
    
}