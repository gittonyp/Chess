#include<stdio.h>

struct complex{

    int img;
    int real;
};

int main(){
    int a=0;
    struct complex n;

    while(a==0){
        printf("Complex Number Program");
        printf("\n");
        printf("\n");
        printf("1. read complex program");
        printf("\n");
        printf("2. display");
        printf("\n");
        printf("3. add");
        printf("\n");
        printf("4. multiply");
        printf("\n");
        int op;
        scanf("%d",&op);
        switch (op)
        {
        case 1:
        printf("enter real part");
            scanf("%d",&n.real);
            printf("enter img part");
            scanf("%d",&n.img);
            break;
        case 2:
        printf("%d + %d i",n.real,n.img);
            break;

        case 3:
            printf("Enter Second number");
            int aa,bb;
            printf("enter real part");
            scanf("%d",&aa);
            printf("enter img part");
            scanf("%d",&bb);
            printf("Sum is ");
            printf("%d + %d i",n.real+aa,n.img+bb);
            break;

        case 4:
         printf("Enter Second number");
            int aa,bb;
            printf("enter real part");
            scanf("%d",&aa);
            printf("enter img part");
            scanf("%d",&bb);
            printf("multiplication is ");
            printf("%d + %d i",(n.real*aa-bb*n.img),(n.real*bb+n.img*aa));
            break;
        
        default:
        printf("pla Enter correct operation");
            break;
        }






    }

}