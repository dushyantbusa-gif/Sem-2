#include <stdio.h>

int main() {
    int a[5], i;
    int pos=0,neg=0;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++) {
        if(a[i] < 0)
           pos++;
        if(a[i] > 0)
          neg++;

    }

    printf("pos value = %d\n", neg);
    printf("neg value = %d\n", pos);

    return 0;
}
