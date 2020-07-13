#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

//Function to Display middle element
void FindNfromEnd(int n)
{
    Node *prev = head;
    Node *front = head;
    int counter = 1;

    if (head == NULL)
        cout << "List id Empty ";
    else
    {
        while (counter <= n - 1)
        {
            front = front->next;
            counter = counter + 1;
        }
        while (front->next != NULL)
        {
            front = front->next;
            prev = prev->next;
        }
        cout << "Middle element is : " << prev->data;
    }
}

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
            temp = temp->next;
        }
        cout << "\n";
    }
}

int main()
{
    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);
    //insertEnd(6);
    //insertEnd(7);
    // insertEnd(8);

    displayList();
    FindNfromEnd(4);
    return 0;
}
