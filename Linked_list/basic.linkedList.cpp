#include<bits/stdc++.h>
using namespace std;

// Node ক্লাস তৈরি
class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_tail(node*& head, int v) {
    node* newNode = new node(v);
    if (head == NULL) {  
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// লিঙ্কড লিস্ট প্রিন্ট করা
void print_linked_list(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void inser_any_position(node *head, int postion, int value){
    node *newHead = new node(value);
    

}


int main() {
    node* head = NULL;  // লিঙ্কড লিস্টের হেড পয়েন্টার
    while (true) {
        cout << "Option 1: Insert a node at the tail\n";
        cout << "Option 2: Print the linked list\n";
        cout << "Option 3: Inser any position \n";
        cout << "Option 4: Exit\n";
        cout << "Enter your choice: ";
        int n;
        cin >> n;

        if (n == 1) {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_tail(head, v);
        } else if (n == 2) {
            print_linked_list(head);
        } else if (n==3){
            int postion,value;
            cin>>postion>>value;
            inser_any_position(head, postion, value);

        }
         else if (n == 4) {
            cout << "Exiting program..." << endl;
            break;
        } else {
            cout << "Invalid option! Try again." << endl;
        }
    }
    return 0;
}
