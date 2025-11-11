#include <bits/stdc++.h>

using namespace std;



class Node{
    public:
    int data;
    Node* next;


    Node(int data1, Node* next1){
        data = data1;
        next = next1;

    }

    Node(int data1){
        data = data1;
        next = nullptr;

    }
};


Node* reversell(Node* head){
    if(head== nullptr || head->next == nullptr) return nullptr;
    
    Node* prev = nullptr;

    while(head != nullptr){
        Node* front = head->next;
        head->next = prev;
        head= front;
    }
    return prev;
}
