#include <stdio.h>

void printarray(int array[], int size, int with) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("}");
    if(with==0){
        printf("\n");
    }
}

void merge(int array[], int left, int mid, int right) {
    int with = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArray[n1], rightArray[n2];

    for (int i = 0; i < n1; i++) {
        leftArray[i] = array[left + i];
    }

    for (int j = 0; j < n2; j++) {
        rightArray[j] = array[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    printf("Merging L=");
    with=1;
    printarray(leftArray, n1, with);
    printf(" with R=");
    printarray(rightArray, n2, with);

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = rightArray[j];
        j++;
        k++;
    }

    printf("\nResult of merge ");
    with=0;
    printarray(array + left, right - left + 1, with);
}

void mergesort(int array[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        printf("Left\tCalling mergeSort with L=%d M=%d\n", left, mid);
        mergesort(array, left, mid);
        printf("Right\tCalling mergeSort with L=M+1=%d R=%d\n", mid + 1, right);
        mergesort(array, mid + 1, right);
        printf("Merge\tCalling merge with L=%d M=%d R=%d\n", left, mid, right);
        merge(array, left, mid, right);
    } else {
        printf("\t\tmergeSort bottomed out L>=R\n");
    }
}

int main() {
    int array[] = { 38, 27, 43, 3, 9, 82, 10 };
    int size = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array = ");
    int with = 0;
    printarray(array, size, with);

    printf("\tCalling mergeSort from main L=0 R=%d\n", size - 1);
    mergesort(array, 0, size - 1);

    printf("Sorted array = ");
    printarray(array, size, with);


    return 0;
}
