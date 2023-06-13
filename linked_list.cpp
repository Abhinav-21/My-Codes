#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int dat)
    {
        this->data = dat;
        this->next = NULL;
    }
};

void printList(Node *head)
{
    // Node *cur = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void printListRecursive(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    printListRecursive(head->next);
}

Node *insertSorted(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    else if (head->data > temp->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL) 
    {
        if (curr->next->data > temp->data) 
        {
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
        else
        {
            curr = curr->next;
        }
    }
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printList(head);
    cout << endl;

    int x = 15;

    Node *thobda = insertSorted(head, x);

    printList(thobda);

    return 0;
}