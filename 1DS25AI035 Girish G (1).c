#include <stdio.h>
int main() {

int n;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter array elements: ");
for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
}

printf("\n\nTraversal of array elements:\n");
for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
}


printf("\n\nLinear Search of array elements:\n");
int key,found=0;
printf("Enter element to search: ");
scanf("%d", &key);
for(int i=0; i<n; i++) {
    if(arr[i]==key) {
        printf("Element %d found at index %d\n", key, i);
        found = 1;
        break;
    }
}


printf("\n\nMaximum of array elements:\n");
int max=arr[0];
for(int i=1; i<n; i++) {
    if(arr[i] > max) {
        max = arr[i];
    }
}
printf("Maximum element in array is %d\n", max);


printf("\n\nMinimum of array elements:\n");
int min=arr[0];
for(int i=1; i<n; i++) {
    if(arr[i] < min) {
        min = arr[i];
    }
}
printf("Minimum element in array is %d\n", min);


printf("\n\nInsertion of array elements:\n");
int pos,value;
printf("Enter position to insert (0 to %d): ", n);
scanf("%d", &pos);
printf("Enter value to insert: ");
scanf("%d", &value);
for (int i=n; i>pos; i--) {
    arr[i] = arr[i - 1];
}
arr[pos] = value;
n++;
printf("Element inserted successfully!\n");
printf("Updated array: ");
for (int i=0; i<n; i++) {
    printf("%d ", arr[i]);
}


printf("\n\nDeletion of array elements:\n");
int pos1;
printf("Enter position to delete (0 to %d): ", n-1);
scanf("%d", &pos1);
for(int i=pos1; i<n-1; i++) {
    arr[i] = arr[i+1];
}
n--;
printf("Element deleted successfully!\n");
printf("Updated array: ");
for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");

return 0;
}