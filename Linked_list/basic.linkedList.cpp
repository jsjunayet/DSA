#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;
        this->next=NULL;
        
    }
};
void inser_at_tail(node *head, int v){
    node *newHead = new node(v);
    
}
int main (){
   node *head;
    int n;
   cout<<"option-1: please insert node : ";
   cout<<"option-2: print you linked list: ";
   cout<<"option-3: exit: ";
   if(n==1){
    int v;
    cin>>v;
    inser_at_tail(head,v);
   }
}