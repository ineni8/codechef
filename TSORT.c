#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    int t;
    scanf("%d", &t);
    int *a = (int *)malloc(t * sizeof(int));
    if (a == NULL) {
        perror("Unable to allocate memory");
        return 1;
    }

    for (int i = 0; i < t; i++) {
        scanf("%d", &a[i]);
    }

    // Using qsort to sort the array
    qsort(a, t, sizeof(int), compare);

    for (int i = 0; i < t; i++) {
        printf("%d\n", a[i]);
    }

    // Free the dynamically allocated memory
    free(a);

    return 0;
}