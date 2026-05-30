#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
// Function to traverse through the list and print each value
void printList(Node *head)
{
    Node *temp = head; // Start at the beginning
    while (temp != NULL)
    {                              // Keep going until we hit a dead end (NULL)
        cout << temp->data << " "; // Print the current number
        temp = temp->next;         // Move the pointer to the next box
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call the function and pass the first node (the head)
    printList(node1);
    return 0;
}

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

void traverse(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    traverse(head);

    return 0;
}
