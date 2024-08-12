//Stones on the Table

#include <stdio.h>
#define n_max 52

int main(){
    int n;
    char stones[n_max];
    int count = 0;

    scanf("%d", &n);
    scanf("%s", stones);

    for (int i = 1; i < n; i++){
        if (stones[i] == stones[i - 1]){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

