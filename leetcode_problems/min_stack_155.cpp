#include <iostream>

struct StackItem {
    int value {};
    StackItem* next {}; 
};

void print_stack(StackItem* item) {
    std::cout << "[ ";
    while (item != NULL) {
        std::cout << item->value << " ";
        item = item->next;
    }
    std::cout << "]\n";
}

class MinStack {
public:
    StackItem* stack_top = NULL;
    StackItem* stack_min = NULL;
    
    
    MinStack() { // init function
        /* create pointer members for:
        - top of stack
        - min (smallest) val (and flag?)
        - a linked-list entity?
            - create a "null" stack node
        */
        
        
    }
    
    void push(int val) {
        /*
        - allocate a new int of value "val"
        - store it's memory location in a pointer
        - redefine this pointer to be the "top" of the stack
        - have this new object point to the previous "top" of the stack
        - check if min:
            - if min_pointer = null -> push_val is new min
            - else if push_val < current_min_val -> push_val new min
        */

        // create new item for added val
        StackItem* new_item = new StackItem;
        new_item->value = val;
        new_item->next = NULL;

        // if stack is empty, initialize new value for top and min
        if (stack_top == NULL) {
            stack_top = new_item;
            stack_min = new_item;
        }
        else { // else add new item to top and check if min
            new_item->next = stack_top;
            stack_top = new_item;
            if (val < stack_min->value) {
                stack_min = new_item;
            }
        }
    }
    
    void pop() {
        // set top_pointer = next_item_pointer
        if (stack_top == stack_min) {
            // find the next smallest min
            StackItem* item = stack_top->next;
            stack_min = item;
            while (item != NULL) {
                if (item->value < stack_min->value) {
                    stack_min = item;
                }
                item = item->next;
            }
        }
        stack_top = stack_top->next;
    }
    
    int top() {
        // return value at stack top
        return stack_top->value;
    }
    
    int getMin() {
        // return value of stack min
        return stack_min->value;
    }
};

int main() {



    MinStack* obj = new MinStack();
    obj->push(1);
    obj->push(2);
    obj->push(3);

    print_stack(obj->stack_top);

    std::cout << "Stack min = " << obj->getMin() << '\n';
    std::cout << "Stack top = " << obj->top() << '\n';

    std::cout << "callin pop()\n";

    obj->pop();
    print_stack(obj->stack_top);




    // obj->push(val);
    // obj->pop();
    // int param_3 = obj->top();
    // int param_4 = obj->getMin();


    return 0;
}


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */