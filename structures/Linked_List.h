//
// Created by TANK1_41 on 3/24/2023.
//

#ifndef DATA_STUCTURES_AND_ALGORITHMS_LINKED_LIST_H
#define DATA_STUCTURES_AND_ALGORITHMS_LINKED_LIST_H
struct List_Node {
    int m_data;
    List_Node *next = nullptr;
    List_Node *previous = nullptr;
};
class List {
private:
    unsigned int size = 0;
    List_Node *m_start = nullptr;
    List_Node *m_end = nullptr;

public:
    List() = default;
    ~List() {
        for (unsigned int i = 0; i < size; i++) {
        }
    }
    void insert(int data) {
        List_Node *newNode = new List_Node;
        newNode->m_data = data;
        if (m_start == nullptr || m_end == nullptr) {
            m_start = newNode;
            m_end = newNode;
        } else {
            m_end->next = newNode;
            m_end = newNode;
        }
        size++;
    }

    void insertAtIndex(int data, unsigned int index) {
        int i = 0;
        List_Node *p = m_start, *q,
                  *newNode = new List_Node;
        newNode->m_data = data;

        if (index == 0) {
            newNode->next = m_start;
            m_start = newNode;
        } else {
            while ((p != nullptr) && (i < index)) {
                i++;
                q = p;
                p = p->next;
            }
            q->next = newNode;
            newNode->next = p;
        }
        size++;
    }
    void removeElement(int index) {
    }
    unsigned get_size() {
        return size;
    }
};

#endif//DATA_STUCTURES_AND_ALGORITHMS_LINKED_LIST_H
