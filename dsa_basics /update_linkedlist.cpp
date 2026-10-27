// insert in middle ke lie timee complexity is o(n)
#include <iostream>
using namespace std;
// Node structure
class Node {
    public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
// Function to insert at middle
void insertAtMiddle(Node* &head, int pos, int val) {
    Node* newNode = new Node(val);
    if(pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
// Function to print list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(30);
    cout << "Before: ";
    printList(head);
    insertAtMiddle(head, 2, 20);
    cout << "After:  ";
    printList(head);
    return 0;
}

