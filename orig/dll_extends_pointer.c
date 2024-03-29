extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/*
 * This source code is licensed under the GPLv3 license.
 *
 * Taken from Forester.
 */

#include <stdlib.h>

typedef struct TData
{
	char x;
} Data;

typedef struct TNode
{
	struct TNode* next;
	struct TNode* prev;
	Data* pData;
	Data data;
} Node;

int main()
{
	Node* list = NULL;
	Node* y = NULL;

	y = malloc(sizeof(Node));
	y->next = NULL;
	y->prev = NULL;
	y->pData = &y->data;
	list = y;

	while (__VERIFIER_nondet_int())
	{
		y = malloc(sizeof(Node));
		y->next = list;
		list->prev = y;

		if (__VERIFIER_nondet_int())
		{
			y->pData = malloc(sizeof(Data));
		}
		else
		{
			y->pData = &y->data;
		}

		list = y;
	}

	while (NULL != list)
	{
		y = list;
		list = list->next;

		if (&y->data != y->pData)
		{
			free(y->pData);
		}

		free(y);
	}

	return 0;
}
