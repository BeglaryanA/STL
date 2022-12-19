#ifndef STACK_HPP
#define STACK_HPP
#include "stack.h"

template <typename T>
stack<T>::stack()
: head{nullptr}
, tail{nullptr}
, m_size{0}
{}

template <typename T>
void stack<T>::push(const T& rhs) {
    if (!this->head) {
        Node* tmp = new Node(rhs);
        this->head = tmp;
        this->tail = tmp;
        return ;
    }
    Node* tmp = new Node(rhs);
    this->tail->next = tmp;
    tmp->prev = this->tail;
    this->tail = tmp;
    ++this->m_size;
}

template <typename T>
void stack<T>::push(T&& rhs) {
    if (!this->head) {
        Node* tmp = new Node(rhs);
        this->head = tmp;
        this->tail = tmp;
        ++this->m_size;
        return ;
    }
    Node* tmp = new Node(rhs);
    this->tail->next = tmp;
    tmp->prev = this->tail;
    this->tail = tmp;
    ++this->m_size;
}

template <typename T>
void stack<T>::pop() {
    if (!this->tail) {
        return;
    }
    Node* tmp = this->tail;
    this->tail = this->tail->prev;
    delete tmp;
    tmp = nullptr;
    --this->m_size;
}


template <typename T>
const std::size_t stack<T>::size() const {
    return this->m_size;
}

template <typename T>
std::size_t stack<T>::size()  {
    return this->m_size;
}

template <typename T>
void stack<T>::swap(stack& rhs) {
    std::swap(this->head, rhs.head);
}

template <typename T>
T stack<T>::top() {
    return this->tail->data;
}

template <typename T>
const T stack<T>::top() const {
    return this->tail->data;
}


template <typename T>
bool stack<T>::empty() {
    return (this->m_size == 0);
}

template <typename T>
stack<T>::~stack() {
    if (!this->head) {
        return;
    }
    Node* tmp = this->head;
    while (!this->head->next) {
        tmp = this->head;
        this->head = this->head->next;
        delete tmp;
    }
    tmp = nullptr;
    this->head = nullptr;
    this->tail = nullptr;
}


#endif // STACK_HPP