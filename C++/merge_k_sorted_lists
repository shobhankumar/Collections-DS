/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multimap<int, ListNode*> listmap;
        ListNode *newhead = nullptr;
        ListNode *prev = nullptr;
        ListNode *tmp = nullptr;

        for (int i = 0; i < lists.size(); i++) {
            ListNode *temp = lists[i];
            while (temp) {
                listmap.insert(pair<int, ListNode *>(temp->val,temp));
                temp = temp->next;
            }
        }

        for (auto itr = listmap.begin(); itr != listmap.end(); itr++) {
            if (newhead == nullptr) {
                tmp = newhead = itr->second;
            } else {
                tmp = itr->second;
                prev->next = tmp;
            }
            prev = tmp;
        }
        return newhead;
    }
};
