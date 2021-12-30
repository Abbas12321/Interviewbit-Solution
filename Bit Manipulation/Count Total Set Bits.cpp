
#include <math.h>


int Solution::solve(int A) {

    int n= 30, offset = 0;

    long long total = 0;

    while(A>0){

        while(!(A&(1<<n))){

            n--;

        }

        total = total + (2*offset+ n)* pow(2,n-1) + 1;

        A = A^(1<<n);

        offset = offset + 1;

    }

    return total%1000000007;

}

