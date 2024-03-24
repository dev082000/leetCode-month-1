 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       // ListNode* reverse(ListNode* head);
      //  l1=reverse(l1);
       // l2=reverse(l2);
        if(l1==NULL)
        {
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
          ListNode* resulthead=NULL;
        ListNode* resulttail=NULL;
        int carry=0;
        while(l1 != NULL && l2 != NULL)
        {
               int sum=carry+l1->val+l2->val;
               int digit=sum%10;
               carry=sum/10;
               ListNode* node=new ListNode(digit);
               if(resulthead==NULL)
                {
                    resulthead=node;
                    resulttail=node;
                }
                else
                {
                    resulttail->next=node;
                    resulttail=node;
                }
                 l1=l1->next;
                l2=l2->next;
        }
        while(l1!=NULL)
        {int sum=carry+l1->val;
               int digit=sum%10;
               carry=sum/10;
               ListNode* node=new ListNode(digit);
               resulttail->next=node;
               resulttail=node;
               l1=l1->next;

        }
         while(l2!=NULL)
        {int sum=carry+l2->val;
               int digit=sum%10;
               carry=sum/10;
               ListNode* node=new ListNode(digit);
               resulttail->next=node;
               resulttail=node;
               l2=l2->next;

        }
                while(carry!=0)
        {
            int sum=carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode* node=new ListNode(digit);
            resulttail->next=node;
            resulttail=node;
        }
       // resulthead=reverse(resulthead);
        return resulthead;
    }
};
ListNode* reverse(ListNode* head)
{
 ListNode* prev=NULL;
 ListNode* curr=head;
 ListNode* forward;
 while(curr!=NULL)
 {
     forward=curr->next;
     curr->next=prev;
     prev=curr;
     curr=forward;
 }
 return prev;
}