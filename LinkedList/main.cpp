#include<stdio.h>
#include <stdlib.h>

struct NODE {
	struct NODE *prev;
	int id;
	int data;
	struct NODE* next;
};

struct NODE* head;

void add(int id, int data) {
	struct NODE* tmp = malloc(sizeof(struct NODE);
}

int main() {
	head->prev = NULL;
	head->next = NULL;
}