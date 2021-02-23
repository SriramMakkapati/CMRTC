#include <stdio.h>
int maximumProduct(int A[],int n) {
    int i;
    int minimum,maximum,x;
    x= maximum = minimum = A[0];
    for(i = 1; i < n; i++)
 {
        int t_maximum = maximum;
        if(maximum * A[i] > A[i])
            maximum *= A[i];
        else
            maximum = A[i];
        if(minimum * A[i] > maximum)
            maximum = minimum * A[i];
        if(minimum * A[i] < A[i])
            minimum *= A[i];
        else
            minimum = A[i];
        if(t_maximum * A[i] < minimum)
            minimum = t_maximum * A[i];
        if(maximum > x)
            x = maximum;
    }
    return x;
}
int main() {
    int A[] = {2,5,-9,-6,2};
    printf("%d\n", maximumProduct(A, 5));
    return 0;
}
