#include "list.h"

#include <stdio.h>
#include <stdlib.h>

#include "door_struct.h"

struct node* init(const struct door* door) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->data = *door;
    new_node->next = NULL;
    return new_node;
}

struct node* add_door(struct node* elem, const struct door* door) {
    if (elem == NULL) {
        return NULL;
    }
    struct node* new_node = init(door);
    struct node* next_elem = elem->next;
    elem->next = new_node;
    new_node->next = next_elem;
    return new_node;
}

struct node* find_door(const int door_id, struct node* root) {
    while (root != NULL) {
        if (door_id == root->data.id) {
            return root;
        }
        root = root->next;
    }
    return NULL;
}

struct node* remove_door(struct node* elem, struct node* root) {
    struct node* prev_node = NULL;
    struct node* temp = root;
    while (temp != NULL) {
        if (temp->next && elem->data.id == temp->next->data.id) {
            prev_node = temp;
            break;
        }
        temp = temp->next;
    }
    if (prev_node == NULL) {
        return NULL;
    }
    prev_node->next = elem->next;
    free(elem);
    return root;
}

void destroy(struct node* root) {
    if (root == NULL) {
        return;
    }
    destroy(root->next);
    free(root);
}

void print_list(struct node* root) {
    if (root == NULL) {
        return;
    }
    while (root != NULL) {
        printf(root->next != NULL ? "%d %d, " : "%d %d", root->data.id, root->data.status);
        root = root->next;
    }
}