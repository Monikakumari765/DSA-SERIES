#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct node {
    int data;
    struct node *next;
};

// Function to insert at end
struct node* insertEnd(struct node *head, int value) {
    struct node *newNode, *temp;
    
    // Create new node
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;
        
        // Traverse to last node
        while (temp->next != NULL) {
            temp = temp->next;
        }
        
        // Insert at end
        temp->next = newNode;
    }
    
    return head;
}

// Function to display list
void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

// Main function
int main() {
    struct node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    printf("Linked List: ");
    display(head);

    return 0;
}

