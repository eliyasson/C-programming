#include <stdio.h>
int main() {
    float r, d, k, a;
    
    printf("Anna ympyrän säde ");
    scanf("%f", &r);
    
    d = 2*r;
    
    k = 2*3.14*r;
    
    a = 3.14*(r*r);
    
    printf("Halkaisija on %.2f, \nkeha on %.2f, \nprinta-ala on %.2f", d, k, a);

    return 0;
}

