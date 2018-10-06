#include <stdio.h>
#include <stdlib.h>

int main() {
    int sizeofarray;
    printf("nhap vao so luong phan tu trong mang :");
    scanf("%d", &sizeofarray);
    int *pointer = (int*) malloc(sizeofarray * sizeof(int));
    if(pointer == NULL)
    {
        printf("Khong du bo nho cap phat ");
    }
    int i;
    for (i = 0; i < sizeofarray; ++i) {
        printf("Vui long nhap vao phan tu thu %d",i + 1);
        scanf("%d",pointer + i);
    }
    for (int j = 0; j < sizeofarray; ++j) {
        printf("Gia tri phan tu thu %d la %d\n",j + 1,*(pointer + j));
    }
printf("nhap so luong phan tu muon them");
    int add;
    scanf("%d",&add);
    sizeofarray += add;
    pointer =realloc(pointer,add * sizeof(int));
    for(i;i < sizeofarray;i++)
    {
        printf("nhap vao gia tri phan tu thu %d :",i + 1);
        scanf("%d",pointer + i);
    }
    for (int j = 0; j < sizeofarray; ++j) {
        printf("%d",*(pointer + j));
    }
    free(pointer);
    //int arraynumber[sizeofarray];
    //arraynumber == (int*) malloc(sizeofarray * sizeof(int));

    //cach 1: dung index
//    for (int i = 0; i < sizeofarray; ++i) {
//        printf("vui long nhap vao phan tu thu %d :",i + 1);
//        scanf("%d",&arraynumber[i]);
//    }
//    for (int j = 0; j < sizeofarray ; ++j) {
//        printf("Gia tri phan tu thu %d la %d",j + 1,arraynumber[j]);
//    }
// cach 2: dung con tro di chuyen
//    int *p = &arraynumber[0];
//    for (int i = 0; sizeofarray > i; ++i) {
//        scanf("%d", p);
//        p++;
//    }
//    p--;
//    for (int j = 0; j < sizeofarray; ++j) {
//        printf("%d", *p);
//        p--;
//    }
//    cach 3 : dung con tro ma khong di chuyen con tro
//int *p = arraynumber;
//    for (int i = 0; i < sizeofarray; ++i) {
//        scanf("%d",p + i);
//    }
//    for (int j = 0; j < sizeofarray; ++j) {
//        printf("%d",*(p + j));
//    }
// cach 4: dung con tro la ten ham
//    for (int i = 0; i < sizeofarray; ++i) {
//        scanf("%d",arraynumber + i);
//    }
//    for (int j = 0; j < sizeofarray ; ++j) {
//        printf("%d",(*arraynumber + j ));
//    }
//    printf("Hello, World!\n");
    return 0;
}