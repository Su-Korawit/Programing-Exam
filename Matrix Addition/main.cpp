#include <stdio.h>

int main()
{
	int a[100];
    for (int i=0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i; i < 3; i++) {
        printf("%d", a[i]);
    }
}
