#include <stdio.h>

int main(){
    int inputs[4];
    for(int i = 0;i<4;i++){
        scanf("%d", &inputs[i]);
    }
    int DIFERENCA = (inputs[0] * inputs[1]) - (inputs[2] * inputs[3]);
    printf("DIFERENCA = %d\n", DIFERENCA);
    return 0;
}