
#include "DataLinkedList.h"
#include "Data.h"
#include <iostream>

void DataLinkedList::insertBack(Data* data) {
    Node* node = new Node(data);
    if (!tail) head = tail = node;
    else {
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
    this->size++;
}

void DataLinkedList::insertMiddle(Data* data) {
    Node* node = new Node(data);
    if (!head) {
        head = tail = node;
    } else {
        Node* curr = head;
        for (int i = 0; i < this->size / 2; ++i) curr = curr->next;
        node->next = curr;
        node->prev = curr->prev;
        
        if (curr->prev) {
            curr->prev->next = node;
        } else {
            head = node;
        }
        curr->prev = node;
    }
    this->size++;
}

void DataLinkedList::insertFront(Data* data) {
    Node* node = new Node(data);
    if (!head) head = tail = node;
    else {
        node->next = head;
        head->prev = node;
        head = node;
    }
    this->size++;
}

void DataLinkedList::removeNode(Node* target){
    if (!target) return;
    
    if (target == this->head) {
        this->head = target->next;
    }
    if (target == this->tail) {
        this->tail = target->prev;
    }

    if (target->prev){
        target->prev->next = target->next;
    }
    if (target->next){
        target->next->prev = target->prev;
    }
    delete target;
    this->size--;
}

DataLinkedList::~DataLinkedList(){
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        delete curr;
        curr = next;
    }
    head = tail = nullptr;
    this->size = 0;
}
