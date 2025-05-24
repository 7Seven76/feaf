
#ifndef DATALINKEDLIST_H
#define DATALINKEDLIST_H

#include "Data.h"

// Linked list for data 

struct Node{
    Data* data;
    Node* prev;
    Node* next;
    Node(Data* data) : data(data), prev(nullptr), next(nullptr) {}
    ~Node() {};
};

class DataLinkedList{
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int size = 0;

    void insertFront(Data* data);
    void insertBack(Data* data);
    void insertMiddle(Data* data);
    void removeNode(Node* target);
    void insertSorted(Data* data);

    ~DataLinkedList();

};

#endif 