#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int value;
    Node *next;

    // Constructor to initialize the node
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

// Function to insert a node at the head (beginning) of the linked list
void insertAtHead(Node *&head, int value) {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head" << endl;
}

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node *&head, int value) {
    Node *newNode = new Node(value);

    // If the list is empty, set the new node as the head
    if (head == NULL) {
        head = newNode;
        cout << "Inserted at head (empty list)" << endl;
        return;
    }

    // Traverse to the last node
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link the new node at the end of the list
    temp->next = newNode;
    cout << "Inserted at tail" << endl;
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(Node *&head, int position, int value) {
    if (position == 1) {
        insertAtHead(head, value);
        return;
    }

    Node *newNode = new Node(value);
    Node *temp = head;

    // Traverse to the node just before the insertion point
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        temp = temp->next;
    }

    // Insert the new node at the specified position
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted at position " << position << endl;
}

// Function to delete a node at a specific position in the linked list
void deleteAtPosition(Node *&head, int position) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    Node *temp = head;

    // If deleting the head node
    if (position == 1) {
        head = head->next;
        delete temp;
        cout << "Deleted head" << endl;
        return;
    }

    // Traverse to the node just before the one to be deleted
    for (int i = 1; i < position - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        temp = temp->next;
    }

    // Delete the node at the given position
    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    cout << "Deleted node at position " << position << endl;
}

// Function to print the entire linked list
void printLinkedList(Node *head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node *temp = head;
    cout << "Your linked list: ";
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;

    while (true) {
        cout << "\nOptions:" << endl;
        cout << "1. Insert at head" << endl;
        cout << "2. Insert at tail" << endl;
        cout << "3. Insert at any position" << endl;
        cout << "4. Delete from any position" << endl;
        cout << "5. Print linked list" << endl;
        cout << "6. Terminate" << endl;

        int option;
        cin >> option;

        if (option == 1) {
            int value;
            cout << "Enter value to insert at head: ";
            cin >> value;
            insertAtHead(head, value);
        }
        else if (option == 2) {
            int value;
            cout << "Enter value to insert at tail: ";
            cin >> value;
            insertAtTail(head, value);
        }
        else if (option == 3) {
            int position, value;
            cout << "Enter position to insert: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            insertAtPosition(head, position, value);
        }
        else if (option == 4) {
            int position;
            cout << "Enter position to delete: ";
            cin >> position;
            deleteAtPosition(head, position);
        }
        else if (option == 5) {
            printLinkedList(head);
        }
        else if (option == 6) {
            cout << "Program terminated." << endl;
            break;
        }
        else {
            cout << "Invalid option! Please try again." << endl;
        }
    }

    return 0;
}
