/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        multimap<int,ListNode *> listmap;

        while(headA) {
            listmap.insert(pair<int, ListNode *>(headA->val, headA));
            headA = headA->next;
        }

        while(headB) {
            auto itr = listmap.find(headB->val);
            if (itr != listmap.end() && itr->second == headB) {
                return headB;
            } else {
                listmap.insert(pair<int, ListNode *>(headB->val, headB));
            }
            headB = headB->next;
        }


        return nullptr;
    }
};
