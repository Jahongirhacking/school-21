#ifndef LIST_H
#define LIST_H

#include "door_struct.h"

// Node structure for singly linked list
struct node {
    struct door data;
    struct node* next;
};

// Function prototypes
struct node* init(const struct door* door);
struct node* add_door(struct node* elem, const struct door* door);
struct node* find_door(const int door_id, struct node* root);
struct node* remove_door(struct node* elem, struct node* root);
void destroy(struct node* root);
void print_list(struct node* root);

#endif // LIST_H
