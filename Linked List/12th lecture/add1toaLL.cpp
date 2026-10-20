// class Solution {
// private:
//     int helper(ListNode* temp){
//         if(temp == NULL){
//             return 1;
//         }
//         int carry = helper(temp->next);
//         temp->data = temp->data + carry;
//         if(temp->data < 10){
//             return 0;
//         }
//         temp->data = 0;
//         return 1;
//     }
// public:
//     ListNode *addOne(ListNode *head) {
//         int carry = helper(head);
//         if(carry == 1){
//             ListNode* newNode = new ListNode(1);
//             newNode->next = head;
//             return newNode;
//         }
//         return head;
//     }
// };