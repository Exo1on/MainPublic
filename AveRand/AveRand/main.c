//
//  main.c
//  AveRand
//
//  Created by John Makin on 19/06/2019.
//  Copyright © 2019 John Makin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[])
{
    long long int i;
    long double ave=0;
    
    for(i=1;i<1e+15;i++)
    {
        ave= ((ave*(i-1))+((long double)rand()/RAND_MAX))/i;
        if (i%100==0)
        {
            printf("%.10Lf\n",ave);
        }
    }
    return 0;
}
