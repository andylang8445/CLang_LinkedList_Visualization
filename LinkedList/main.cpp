#include<stdio.h>
#include <stdlib.h>

#pragma warning(disable: 6011)

struct NODE {
	struct NODE* prev;
	int id;
	int data;
	struct NODE* next;
};

struct NODE* head;
struct NODE* tail;

void add(int idNew, int dataNew) {//이부분이 오륜게 확실한데,,, 왜 오류지...?
	struct NODE* tmp;
	tmp = (struct NODE*)malloc(sizeof(struct NODE));
	tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
	}
	tmp = tmp->prev;
	struct NODE* NewNode;
	NewNode = (struct NODE*)malloc(sizeof(struct NODE));
	NewNode->prev = tmp;
	tmp->next = NewNode;
	NewNode->id = idNew;
	NewNode->data = dataNew;
	NewNode->next = tail;
}

int main() {
	head = (struct NODE*)malloc(sizeof(struct NODE));
	tail = (struct NODE*)malloc(sizeof(struct NODE));
	head->prev = NULL;
	head->id = NULL;
	head->data = NULL;
	head->next = tail;

	tail->prev = head;
	tail->id = NULL;
	tail->data = NULL;
	tail->next = NULL;

	add(1, 50);
	add(2, 510);
	add(3, 550);
	add(4, 509);

	struct NODE* tmp;
	tmp = (struct NODE*)malloc(sizeof(struct NODE));
	tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
		printf("%d: %d\n", tmp->id, tmp->data);
	}

	printf("-----------------------------\n");

	tmp = head;
	while (tmp->next != NULL) {
		tmp = tmp->next;
		printf("%d: %d\n", tmp->id, tmp->data);
	}
	return 0;
}
