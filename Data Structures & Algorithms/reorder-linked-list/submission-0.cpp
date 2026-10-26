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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        
        stack<ListNode*> st;
        ListNode* curr = head;
        while (curr) {
            st.push(curr);
            curr = curr->next;
        }
        
        int k = st.size() / 2;
        curr = head;
        
        while (k--) {
            ListNode* topNode = st.top();
            st.pop();
            ListNode* nextNode = curr->next;
            
            curr->next = topNode;
            topNode->next = nextNode;
            curr = nextNode;
        }
        curr->next = NULL;
    }
};
