#include<iostream>
using namespace std;

class LinkedListNode{
    public:
    int data;
    LinkedListNode* Next;
};

int main(){
    LinkedListNode* node1= new  LinkedListNode();
    cout<<node1->data<<endl;

    return 0;
}