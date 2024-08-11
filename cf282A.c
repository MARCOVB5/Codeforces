//Bit++

#include <stdio.h>

int main() {
    int x = 0;
    int n;
    char operation[4]; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", operation); 
        if (operation[1] == '+')
            x++;
        else if (operation[1] == '-')
            x--;
    }

    printf("%d\n", x);

    return 0;
}

