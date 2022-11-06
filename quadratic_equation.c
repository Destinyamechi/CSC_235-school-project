#include <stdio.h>
#include <math.h>
#include <complex.h>
int main(){
        complex double c1,c2;
        double  a,b,c,z,x1,x2;
        printf("Enter the co-efficient of x^2: ");
        scanf("%2lf", &a);
        printf("\n Enter the co-efficient of x: ");
        scanf("%2lf", &b);
        printf("\n Enter final number: ");
        scanf("%2lf", &c);
        z = sqrt((pow(b, 2)-(4*a*c)));
        x1 = (-b + z)/(2*a);
        x2 = (-b - z)/(2*a);
        if (z ==  0){
                printf("The equation has equal roots\n The first root =  %.2lf", x1);
        }
        else if (z < 0){
                c1 = (-b +z )/(2*a);
                c2 = (-b - z)/(2*a);
                printf("The first complex root = %.2lf+%.2lfi\n", creal(c1), cimag(c1));
                printf("The first complex root = %.2lf+%.2lfi\n", creal(c2), cimag(c2));
        }
        else{
                printf("The first root =  %.2lf", x1);
                printf("\nThe second root=  %.2lf", x2);
        }
        return 0;
}
