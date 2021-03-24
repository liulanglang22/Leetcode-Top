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
    static ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, vector<ListNode*>> nodeMap;
        for (auto it : lists) {
            ListNode *p = it;
            while(p) {
                nodeMap[p->val].push_back(p);
                p = p->next;
            }
        }
        ListNode *root = new ListNode();
        ListNode *head = root;
        for (auto it : nodeMap) {
            for (auto th = it.second.begin(); th != it.second.end(); ++th) {
                head->next = (*th);
                head = head->next;
            }
        }
        return root->next;
    }
};

int main() {
    ListNode *l1, *l2, *l3;
    l1 = new ListNode(1);
    l2 = new ListNode(1);
    l3 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(5);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    l3->next = new ListNode(6);
    vector<ListNode*> lists;
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);
    Solution::mergeKLists(lists);
    return 0;
}