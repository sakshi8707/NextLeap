#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node *next;
    node(int val)
    {
      data = val;
      next = NULL;
    }
};

void insertAtTail(node*& head,int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
      head = n;
      return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
      cout << temp->data << " "
           << "->"
           << " ";
      temp = temp->next;
    }
}



int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n;i++)
   {
      int a;
      cin >> a;
      arr.push_back(a);
   }
   node *head;
   head = NULL;
   for (auto it : arr)
   {
      insertAtTail(head, it);
   }
   int val;
   cin >> val;
   print(head);
   return 0;
}