#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    Node* temp = head; //start at the baginning 
    while(temp != NULL) { //keep going 
        cout << temp->data << " "; 
        temp = temp->next; 
    }
}
int main() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
printList(node1);

    return 0;
}