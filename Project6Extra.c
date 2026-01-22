#include<stdio.h>
int main()
{
    float a;
    printf("Δώστε μια τιμή float:");
    scanf("%f", &a);
    printf("Η τιμή %.2f αποθηκέυτηκε στη διεύθυνση:%p\n",a, &a);

    int A[7]={-31, -12, 21, 330, 11, 0, -43};
    float B[5]={-9.0, 1.94, 32.5, 1.33, 11.4};

    printf("Πίνακας Α:\n");
    for(int t=0;t<7;t++){
        printf("A[%d]=%d\n",t,A[t]);
    }
    printf("\nΠίνακας Β:\n");
    for(int i=0;i<5;i++){
        printf("Β[%d]=%.2f\n",i,B[i]);
    }
    printf("\nΤο 1° στοιχείο Α: A[0]=%d (διεύθυνση:%p)\n",A[0], &A[0]);
    printf("Το 3° στοιχείο Β: Β[2]=%.2f (διεύθυνση:%p)",B[2], &B[2]);
    return 0;
}
