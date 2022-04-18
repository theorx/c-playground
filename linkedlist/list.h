#ifndef LIST_H
#define LIST_H


// Design linked list which can store anything
// Allocation will require the element passed and it's size
// Anything passed to the list will be deallocted by the list

struct List {
    int    items;
    struct Node * head; 
    //Tail implementation for quick appends without the need of iterating
    //over the whole list
    struct Node * tail; 
};

// Nodes stored within the list 
struct Node {
    void * value;
    struct Node * next;
};


// Creates list itself
struct List * List_Create();

// Frees everything stored in the list
void List_Free(struct List ** list);

// Pushes item to the list, the item has to be allocated dynamically
// as the stored item is a reference
int List_Push(struct List ** list, void * item, unsigned long size);

// Anything popped off the list has to be manually freed
// If the list is empty, then NULL pointer is returned
void * List_Pop(struct List ** list);

// Appends item to the end of the linked list
int List_Append(struct List ** list, void * item, unsigned long size);

// Gets the node->value at specified index or returns NULL if not found
void * List_Get(struct List ** list, unsigned int index);

// Calculates list length
int List_Length(struct List ** list);


#endif
