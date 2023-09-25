class Solution {
public:
    void deletenode(ListNode* &head,int position){
        if(position==1){
          ListNode* temp=head;
          head=head->next;
          temp->next=NULL;
          delete temp;
        }
        else{
        ListNode* prev=NULL;
        ListNode* curr=head;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
      
        }
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        deletenode(head,len-n+1);
        return head;
    }
};
