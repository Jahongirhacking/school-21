#include "list.h"

#include <stdio.h>
#include <stdlib.h>

#include "door_struct.h"

// Function prototypes
void init_test() {
    printf("init_test: ");
    int status = 0;
    const struct door doors[] = {{1, 0}, {2, 0}, {3, 0}};
    struct node* root = init(doors);
    if (root->data.id == doors[0].id) {
        status = 1;
    }
    print_list(root);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(root);
}

void add_door_test() {
    printf("add_door_test: ");
    int status = 0;
    struct door doors[] = {{1, 0}, {2, 0}, {3, 0}};
    struct node* root = init(doors);
    add_door(root, doors + 1);
    add_door(root, doors + 2);
    add_door(root->next->next, doors);
    if (root->data.id == doors[0].id && root->next->data.id == doors[2].id &&
        root->next->next->data.id == doors[1].id && root->next->next->next->data.id == doors[0].id) {
        status = 1;
    }
    print_list(root);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(root);
}

void find_door_test() {
    printf("find_door_test: ");
    int status = 0;
    struct door doors[] = {{1, 0}, {2, 1}, {3, 0}};
    struct node* root = init(doors);
    add_door(root, doors + 1);
    add_door(root, doors + 2);
    struct node* found_node = find_door(doors[1].id, root);
    if (found_node->data.id == doors[1].id && found_node->data.status == doors[1].status) {
        status = 1;
    }
    print_list(found_node);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(root);
}

void remove_door_test() {
    printf("remove_door_test: ");
    int status = 0;
    struct door doors[] = {{1, 0}, {2, 1}, {3, 0}, {4, 1}};
    struct node* root = init(doors);
    add_door(root, doors + 1);
    add_door(root->next, doors + 2);
    add_door(root->next->next, doors + 3);
    remove_door(root->next->next, root);
    if (root->next->next->data.id == doors[3].id && root->next->next->data.status == doors[3].status) {
        status = 1;
    }
    print_list(root);
    printf(" %s\n", status ? "SUCCESS" : "FAIL");
    destroy(root);
}

void destroy_test() {
    printf("destroy_test: ");
    struct door doors[] = {{1, 0}, {2, 1}, {3, 0}, {4, 1}};
    struct node* root = init(doors);
    add_door(root, doors + 1);
    add_door(root->next, doors + 2);
    add_door(root->next->next, doors + 3);
    destroy(root);
    printf("%s\n", "SUCCESS");
}

int main() {
    init_test();
    add_door_test();
    find_door_test();
    remove_door_test();
    destroy_test();
}