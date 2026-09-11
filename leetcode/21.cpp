
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2){
        ListNode dummy(0);
        ListNode *curr = &dummy;
        while (list1 != nullptr && list2 != nullptr){
            if (list1 != nullptr && (list1->val <= list2->val)){
                curr->next = list1;
                list1 = list1->next;
            }
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if (list1 != nullptr) curr->next = list1;
        else curr->next = list2;
        return dummy.next;
    }
};

// there's an easier recursive solution here

/* 

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr) return l2; 
        else if(l2==nullptr) return l1; 
        if(l1->val <= l2->val){
            l1->next = mergeTwoLists(l1->next, l2); 
            return l1; 
        }
        else{
            l2->next = mergeTwoLists(l2->next, l1); 
            return l2; 
        }
    }
        
*/