#include <stdio.h>
int search(int A[],int n,int t)
 {
    int x, y, z;
    x= 0;
    y = n - 1;
    while (x <= y) {
        z= (x + y) / 2;
        if (A[z] == t)
         return z;
        
        if (A[x] <= A[z]) { 
            if (A[x] <= t && t < A[z]) { 
                y = z - 1;
            }
            else {
                x = z + 1;
            }
        }
        else {
            if (A[z] < t && t <= A[y]) { 
                x = z + 1;
            }
            else {
                y = z - 1;
            }
        } 
    }
    return -1;
}

int main() {
    int num[] = { 4, 3, 9 };
    printf("%d\n", search(num,sizeof(num)/sizeof(num[0]), 1));
    return 0;
}