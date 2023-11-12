#include<iostream>
using namespace std;


template<typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(T data) : data(data), next(nullptr) {}
    };
    Node* head;
    Node* tail;
public:
    Queue() : head(nullptr), tail(nullptr) {}
    void push(T data) {
        Node* newNode = new Node(data);
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr) {
            tail = nullptr;
        }
    }
};



void main() {
    Queue <int> q;
    for (size_t i = 0; i <=  4; i++)
    {
        q.push(i);
    }
    q.pop();
    return;
}