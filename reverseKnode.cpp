struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
     int length(ListNode* head);
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len=length(head);
        if(head==NULL)
        {
            return NULL;
        }
        if(len<k)
        {
            return head;
        }
         int i=0;
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* forward;
            while(i<k)
            {
                forward=curr->next;
                curr->next=prev;
                  prev=curr;
                curr=forward;
              
                i++;
            }
             if(forward!=NULL)
           {
               head->next=reverseKGroup( forward, k);
           } 
           return prev;     
    }
};
int Solution:: length(ListNode* head)
{
    ListNode* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}