#include <iostream>
#include <string>
#include <cmath>
#include <sys/time.h>

#include "functions.h"
using namespace std;

double det (double *a, int n)
{
    int column = 0, num = -1, i, j, l, count = 0;
    double val, k, det;
    double start;
    
    start = time_now();
    
    for (j = column; j < n; j++)
    {
    	val = a[i*column + column];
        for (i = column; i < n; i++)
        {
            if (fabs(val) < fabs(a[i*n+column]))
            {
            	val = a[i*n+column];
                num = i;
            }
        }
        
        if (fabs(val-0) > 1e-14)
        {	
        	if (column < num)
            {
        		swap_str (a, n, column, num);
                count++;
            }

            for (i = column+1; i < n; i++)
            {
                k = a[i*n + j] / val;
                
                for (l = 0; l < n; l++)
                    a[i*n + l] -= k * a[column*n + l];
            }
            
            column++;
        }
        else
        {
            printf(">>>det does not exist\n");

            return 0;
        }
    }

    //print (a, n, n, n*n);
    
    det = 1;
    
    for (i = 0; i < n; i++)  
        det *= a[i*n + i];

    if (count%2 == 1)
        det = -det;

    printf("time for det: %lf secs\n", time_now()-start);
    
    return det;
}