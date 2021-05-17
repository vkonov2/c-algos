#include <iostream>
#include <string>
#include <cmath>

#include "functions.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n=4, i, j, max;
    double *a;

    a = (double*)malloc(n*n*sizeof(double));
        if (!a)
        {
            printf (">>>allocation error\n");
            return -2;
        }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            max = i>j?i:j;
            a[i*n+j]=max;
        }
    }

    print (a, n, n, n*n);

    printf ("det = %10.3lf\n", det(a, n));

    return 0;
}