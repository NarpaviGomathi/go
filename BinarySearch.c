#include <stdio.h>

int BinarySearch(int array[], int element, int low, int high){
    while(low <= high){
        int mid = low + (high - low)/2;

        if(array[mid] == element)
            return mid;
        if(array[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
     return -1;
}

int main(){
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x;
    printf("Eneter element to be find: ");
    scanf("%d",&x);
    int n = sizeof(array)/sizeof(array[0])/2;

    int result = BinarySearch(array, x, 0, n-1);
    (result == -1)?printf("Element not found"):printf("Element found at index %d", result);
}