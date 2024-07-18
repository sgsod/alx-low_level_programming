#ifndef __SEARCH_ARGO__
#define __SEARCH_ARGO__
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define BASE_TEN 10

char *itoa(int num, char *str, int base);
void reverse(char str[], int length);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif /*__SEARCH_ARGO__*/
