#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void print(node* &h){
    node* temp=h;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}
int main(){
    node* n=new node(10);
    node* h=n;
    print(h);
    insertathead(h,12);
    insertathead(h,13);
    insertathead(h,14);
    insertathead(h,15);
    print(h);
}