#include <stdio.h>

int main(){
    double grade1, grade2, grade3;
    scanf("%lf", &grade1);
    scanf("%lf", &grade2);
    scanf("%lf", &grade3);
    double MEDIA = ((grade1 * 2) + (grade2 * 3) + (grade3 * 5)) / 10;
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}