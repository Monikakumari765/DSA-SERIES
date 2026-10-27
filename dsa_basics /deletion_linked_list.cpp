#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// case 1:delete first __STDC_NO_THREADS__
void deleteFirst(Node *&head)
{

    if (head == NULL)
        return;

    Node *temp = head;
    head = head->next;

    delete temp;
}
// case 2:delete last_node
void deletelast(Node* head) {
    if (head ==NULL) return ;
    //only one node
    if(head->next ==NULL)
    return ;
}

 