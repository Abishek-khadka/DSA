#include <stdio.h>
void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
            }
        }

        // Swap the minimum element with the current position
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void display(int arr[], int n) {
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");  // Add newline for better formatting
}

int main() {
    int arr[100], n;
      while(1)
      {

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    char choice;
    printf("Do you want to sort (Y/N)?\n");
    scanf(" %c", &choice);  // Include space before %c to handle newline character

    switch (choice) {
        case 'Y':
            selectionsort(arr, n);
            printf("Sorted array:\n");
            display(arr, n);
            break;
        case 'N':
            printf("Array:\n");
            display(arr, n);
            break;
        default:
            printf("Wrong choice\n");
            break;
    }

      }
    return 0;
}
