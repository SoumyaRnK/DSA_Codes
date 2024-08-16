#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// Insertion

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}

/// @brieftraversal

void print(node *h)
{
    node *temp = h;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// middle by fast and slow
node *findmid(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    //cout<<slow->data<<endl;
    return slow;
}
node *merges(node *&l1, node *&l2)
{
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }
    node *ans = new node(-1);
    node *temp = ans;
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data < l2->data)
        {
            // insertattail(temp,l1->data);
            temp->next = l1;
            temp = l1;
            l1 = l1->next;
        }
        else
        {
            temp->next = l2;
            temp = l2;
            l2 = l2->next;
        }
    }
    while (l1 != NULL)
    {
        temp->next = l1;
        temp = l1;
        l1 = l1->next;
    }

    while (l2 != NULL)
    {
        temp->next = l2;
        temp = l2;
        l2 = l2->next;
    }
    ans = ans->next;
    return ans;
}

// mergesort

node *mergesort(node *head)
{

    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *mid = findmid(head);
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;
    left = mergesort(left);
    right = mergesort(right);

    node *res = merges(left, right);

    return res;
}

int main()
{
    node *n = new node(1);
    node *t = n;
    node *h = n;
    int arr[6] = {10, 29, 2, 3, 8, 7};
    int q = 6;
    for (int i = 0; i < q; i++)
    {
        insertattail(t, arr[i]);
    }
    cout << "Before sorting:";
    print(h);
    node *k = mergesort(h);
    cout << endl;
    cout << "After sorting:";
    print(k);
    delete n, t, h;
}