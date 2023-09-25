class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true; // An empty list or a single-node list is a palindrome.
        }

       
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
.
        ListNode* secondHalf = reverseList(slow);

       
        while (head != nullptr && secondHalf != nullptr) {
            if (head->val != secondHalf->val) {
                return false;
            }
            head = head->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};
