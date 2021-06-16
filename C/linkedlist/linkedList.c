#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"

struct structLinkedList {
    uint8 data;
    struct structLinkedList * next;
};

int main(int argc, char const *argv[]) {
    /* code */

    struct structLinkedList * head = NULL;
    struct structLinkedList * second = NULL;
    struct structLinkedList * third = NULL;

    head = (struct structLinkedList *)malloc(sizeof (struct structLinkedList));
    second = (struct structLinkedList *)malloc(sizeof (struct structLinkedList));
    third = (struct structLinkedList *)malloc(sizeof (struct structLinkedList));

    head->next = second;
    second->next = third;
    third->next = NULL;
    return 0;
}
