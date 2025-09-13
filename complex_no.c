#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1, c2;
    float mag1, mag2;

    // Input first complex number
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);


    mag1 = c1.real * c1.real + c1.imag * c1.imag;
    mag2 = c2.real * c2.real + c2.imag * c2.imag;


    if (mag1 > mag2) 
    {
        printf("First complex number has a higher magnitude.\n");
    }
     else if (mag2 > mag1)
      {
        printf("Second complex number has a higher magnitude.\n");
    } 
    else
     {
        printf("Equal\n");
    }

    return 0;
}
