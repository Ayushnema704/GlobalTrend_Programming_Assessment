#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* cur = head;
    ListNode* next = nullptr;
    
    while (cur!= nullptr) {
        next = cur->next; 
        cur->next = prev; 
        prev = cur;       
        cur = next;       
    }
    
    return prev; 
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr){
        cout<<temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}

ListNode* createNode(int val) {
    return new ListNode(val);
}

int main() {
    // Creating a linked list of odd numbers 1 -> 3 -> 5 -> 7 -> 9
    ListNode* head = createNode(1);
    head->next = createNode(3);
    head->next->next = createNode(5);
    head->next->next->next = createNode(7);
    head->next->next->next->next = createNode(9);

    cout<<"Original list: ";
    printList(head);

    head = reverseList(head);

    cout<<"Reversed list: ";
    printList(head);

    return 0;
}
