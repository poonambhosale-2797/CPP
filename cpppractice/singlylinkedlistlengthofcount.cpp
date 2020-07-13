#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

//Function to insert at the end of linked list

void insertEnd(int a)
{
    Node *ptr = new Node();
    ptr->data = a;
    ptr->next = NULL;

    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

//Function to display linked list

void displayList()
{
    int counter = 0;
    Node *ptr = head;
    if (ptr == NULL)
    {
        cout << "List is empty :";
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            counter++;
            temp = temp->next;
        }
        cout << "\n";
    }
    cout << "length is : " << counter;
}

struct Node *creatnode(int d)
{
    struct Node *temp = new Node();
    temp->data = d;
    temp->next = NULL;
    return temp;
}

int main()
{
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);

    displayList();
    return 0;
}

