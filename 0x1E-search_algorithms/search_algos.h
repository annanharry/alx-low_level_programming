#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>

/* helpers */
void print_array(int *array, size_t inc, size_t size);

typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

/* main functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

skiplist_t *linear_skip(skiplist_t *list, int value);
#endif
