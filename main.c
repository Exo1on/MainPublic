//
//  main.c
//  Primes
//
//  Created by John Makin on 18/06/2019.
//  Copyright © 2019 John Makin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int IsPrime(unsigned long long int num);

//FILE *outp;

int main(int argc, const char * argv[])
{
    unsigned long long int i;

    
    //outp=fopen("primes.txt","wt");
    
    for (i=1e+17; i<1e+18; i++)
    {
        if(IsPrime(i))
        {
            printf("PRIME: %lld\n",i);
			//fprintf(outp,"PRIME: %lld\n",i);
        }
    }
    
    //fclose(outp);
    return 0;
}

int IsPrime(unsigned long long int num)
{
    unsigned long long int j,k;
	
	if(num==2) return true;
    
    if(num%2==0) return false;
    
    k=sqrt(num);
    for (j=3; j<=k; j+=2)
    {
		//printf("Test %lld %lld %lld\n",num,j,num%j);
        //fprintf(outp,"Test %lld %lld %lld\n",num,j,num%j);
        if( num % j==0) return false;
       
    }
    
    return true;
}

