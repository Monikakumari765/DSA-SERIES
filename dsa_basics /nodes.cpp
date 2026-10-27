#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

int main() {
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));

    Node* node1=new Node();
    Node* node2=new Node();
    Node* node3=new Node();

    node1 -> data =10;
    node1 -> data =20;
    node1 -> data =30;

    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;


    return 0;
}