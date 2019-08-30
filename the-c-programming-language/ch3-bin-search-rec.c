#include <stdio.h>

int binary_search(int arr[], int low, int high, int find);

int main() {

  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  int size = (sizeof(arr) / sizeof(arr[0]));
  int find = 13;
  int index = binary_search(arr, 0, size, find);
  (index == -1) ? printf("Index not found\n") : printf("Found %d at index %d\n", find, index);
  return 0;
}
/*
 *  Attempts to find the index of a given element in a sorted array.
 *  If found, it returns the index. Otherwise, -1 is returned signifying it was not found.
 *  Param:
 *    int arr[]: Given array
 *    int low: min index
 *    int high: max index
 *    int find: element to be found
 */
int binary_search(int arr[], int low, int high, int find) {

  if (low > high)
    return -1;

  int mid = (low + high) / 2;

  //Check if middle is match
  if (arr[mid] == find)
    return mid;
  //If middle is > element to find, cut out right side
  else if (arr[mid] > find)
    return binary_search(arr, low, mid - 1, find);
  //Middle is < element to find, cut out left side
  else if (arr[mid] < find)
    return binary_search(arr, mid + 1, high, find);
}
