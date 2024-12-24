#include <stdio.h>

int main() {
    
    int rop;
    char sn[50];

    printf("Student Name: ");
    fgets(sn, sizeof(sn), stdin);

    printf("Range of Percentile: ");
    scanf("%d", &rop);

    if(rop >= 98 && rop <=100)
        printf("Grade Transcript: 1");
    
    else if(rop >= 95 && rop <= 97)
        printf("Grade Transcript: 1.25");
    
    else if(rop >= 91 && rop <= 94)
        printf("Grade Percentile: 1.5");
    
    else if(rop >= 88 && rop <= 90)
        printf("Grade Percentile: 1.75");
    
    else if(rop >= 81 && rop <= 87)
        printf("Grade Percentile: 2.0");

    else if(rop >= 78 && rop <= 81 )
        printf("Grade Percentile: 2.25");

    else
        printf("Out of Range!");
    
    return 0;
}