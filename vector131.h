#ifndef VECTOR_131_H
#define VECTOR_131_H

#include <iostream>
#include <string>

using namespace std;



class vector131{

    public:
    vector131();   //the constructor
    ~vector131();   //the destructor

    void push_back(int value);   
    void push_front(int value);

    void print() const;

    void resize();
    
    private:
        struct Node
        {
            int data;
            Node* next;
            Node* prev;
        };
        Node* head, * tail;

    
};

#endif
