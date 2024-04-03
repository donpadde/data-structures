/**
 * @file CStack.htmlinclude [block] file-name="cpp/stack/CStack.h"
 * @brief Implementation of CStack class
 * Detailed description follows here.
 * @author Patrick Suing
 * @date 2024-03-17
 */

class CStack {
public:
    CStack();
    ~CStack();
    void push(int value);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();
    void print();
};