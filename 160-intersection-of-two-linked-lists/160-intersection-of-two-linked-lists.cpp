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
    int count(ListNode *head){
        ListNode *temp= head;
        int count=0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1= count(headA);
        int count2= count(headB);
        int diff= abs(count2-count1);
        int count3=0;
        ListNode *temp1= headA;
        ListNode *temp2= headB;
        if(count1>count2){
            while(count3!=diff){
                temp1=temp1->next;
                count3++;
            }
        }
        else if(count2>count1){
            while(count3!=diff){
                temp2=temp2->next;
                count3++;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
            if(temp1==NULL || temp2==NULL){
                return NULL;
            }
        }
        return temp1;
    }
};