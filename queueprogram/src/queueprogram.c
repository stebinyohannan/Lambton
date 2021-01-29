/*
 ============================================================================
 Name        : queueprogram.c
 Author      : Stebin Yohannan and Shinu Shaji
 Program     : Program 5
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

#define	L		1024
#define	TRUE	1U
#define	FALSE	0U
/*
 * queue and typedef declarations
*/
struct	queue_struct
{
	int		data[L];
	size_t 	front;
	size_t 	back;
};
typedef struct queue_struct	queue;
typedef unsigned short int	bool_t;

/* *************** FUNCTIONS ***************** */
/*
 * stack_empty() implementation
 */
bool_t	queue_empty(queue* s)
{
	if ((s -> back) == 0 && (s -> front) < (s -> back))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/*
 * enqueue() implementation
 */
void enqueue(queue* s, int x)
{
	s -> data[ (s-> back)++ ] = x; /* equivalent to: s -> data [(s->back)] = x; (s->back)++; */

	return;
}

/*
 * dequeue() implementation
 */
int dequeue(queue* s)
{
	if (queue_empty(s))
	{
		printf("underflow error!");
		exit(EXIT_FAILURE);
	}
	else
	{
		return (*s).data[(s->front)++]; /* could also write: (s->data)[(s->front)++]; */
	}
}

int main()
{
	/* declare and initialize variables */
	queue que;
	que.front = 0;
    que.back = 0;
	int loadarr[10] = {52, 29, 72, 40, 62,
			    0, 68, 44, 33, 59};

	int	i=0;
	for (i=0; i < 10; i++)
	{
		printf("queue.back = %zu, ", que.back);
		printf("queue.front = %zu,", que.front);
		enqueue(&que, loadarr[i]); /* calling function enqueue */
		printf("enqueue %d\n", loadarr[i]);
	}
int x;
	for (i=0; i < 10; i++)
		{
		printf("queue front  = %zu, ", que.front);
				x = dequeue(&que); /* calling function dequeue */
				printf("dequeues %d\n", x);
		}

	/* test error function */
	//x = dequeue(&queue); /* comment this out to avoid error */

	return EXIT_SUCCESS;
}

