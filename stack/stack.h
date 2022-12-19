#ifndef STACK_H
#define STACK_H

template <typename T>
class stack {
    struct Node
    {   
        T data;
        Node* next;
        Node* prev;
        Node() : data{0}, next{nullptr}, prev{nullptr} {}
        Node(const T& rhs): data{rhs}, next{nullptr}, prev{nullptr} {}
        Node(T&& rhs) : data{rhs}, next{nullptr} {}
    }*head, *tail;
    std::size_t m_size;
public:
    stack();
    stack(const stack&);
    stack(stack&&);
    ~stack();
public:
    stack& operator=(const stack&);
    stack& operator=(stack&&);
public:
    bool empty();
    void push(const T&);
    void push(T&&);
    void pop();
    void swap(stack&);
    T top();
    const T top() const;
    const std::size_t size() const;
    std::size_t size();
    void print_f() {
        Node* tmp = this->head;
        while (tmp) {
            std::cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }
    void print_r() {
        Node* tmp = this->tail;
        while (tmp) {
            std::cout << tmp->data << " ";
            tmp = tmp->prev;

        }
    }
};


#endif // STACK_H