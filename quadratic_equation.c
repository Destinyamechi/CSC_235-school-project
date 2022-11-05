#include <stdio.h>
#include <math.h>
int main(){
        float  a,b,c,z,x1,x2;
        printf("Enter the co-efficient of x^2: ");
        scanf("%f", &a);
        printf("\n Enter the co-efficient of x: ");
        scanf("%f", &b);
        printf("\n Enter final number: ");
        scanf("%f", &c);
        z = sqrt((pow(b, 2)-(4*a*c)));
        x1 = (-b + z)/(2*a);
        x2 = (-b - z)/(2*a);
        printf("The first root =  %.2f", x1);
        printf("\nThe second root=  %.2f", x2);
        return 0;

}
