#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int [], int, int );
void ssort(int [], int);

void print(int t[], int l) {
  for (int i = 0; i<l; i++) {
    printf("%2i ", t[i]);
    }
  printf("\n");
}

void compare(int l1[], int l2[], int l) {
  for (int i=0; i<l; i++) {
    if (l1[i] != l2[i]) {
      printf("Error in index %i\n", i);
      printf("Expected : ");
      print(l2, l);
      printf("Actual   : ");
      print(l1, l);
      abort();
    }
  }
}

void test_swap_max() {
  int l[] = {10, 4, 6, 2, 7, 3, 15, 8};
  printf("Checking position 0\n"); swap_max(l, 8, 0); int t0[]={15, 4, 6, 2, 7, 3, 10, 8}; compare(l, t0, 8);
  printf("Checking position 1\n"); swap_max(l, 8, 1); int t1[]={15, 10, 6, 2, 7, 3, 4, 8}; compare(l, t1, 8);
  printf("Checking position 2\n"); swap_max(l, 8, 2); int t2[]={15, 10, 8, 2, 7, 3, 4, 6}; compare(l, t2, 8);
  printf("Checking position 3\n"); swap_max(l, 8, 3); int t3[]={15, 10, 8, 7, 2, 3, 4, 6}; compare(l, t3, 8);
  printf("Checking position 4\n"); swap_max(l, 8, 4); int t4[]={15, 10, 8, 7, 6, 3, 4, 2}; compare(l, t4, 8);
  printf("Checking position 5\n"); swap_max(l, 8, 5); int t5[]={15, 10, 8, 7, 6, 4, 3, 2}; compare(l, t5, 8);
  printf("Checking position 6\n"); swap_max(l, 8, 6); int t6[]={15, 10, 8, 7, 6, 4, 3, 2}; compare(l, t6, 8);
  printf("Checking position 7\n"); swap_max(l, 8, 7); int t7[]={15, 10, 8, 7, 6, 4, 3, 2}; compare(l, t7, 8);
};

void test_ssort() {
  printf("Testing sorting\n");
  int arr[] = {5, 13, 76, -4, 12, 120, 23, 14, 11, 9, 7};
  int sorted[] = {120, 76, 23, 14, 13, 12, 11, 9, 7, 5, -4};
  ssort(arr, 11);
  compare(arr, sorted, 11);

  }

int main(void) {
  test_swap_max();
  test_ssort();
  }

