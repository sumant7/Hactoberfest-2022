#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;
    
//no.of digits in n
//floor(log10(n)+1)=ceil(log10(n))


//no.of bits in binary form in n
//floor(log2(n)+1)=ceil(log2(n))


//use (a%b + b)%b over a%b to avoid negativr remainders







/*Mod rules
(a+b)%m= (a%m +b%m)%m
(a*b)%m= (a%m *b%m)%m*/




//Fermat's Little Theorem         if m is prime then  (a^m -a)%m=0  for all a


// sum of all proper divisiors of n= (sum of reciprocal of all proper divisors)*n



/*if we have 2 numbers a and b
let z= a + (b*n)   now   z%n=a and z/n=b    #a should be greater than n
*/





//binary exponentiation to calculate a^n in O(logn)  using bits
/*
13= 1101 in binary
3^13 = 3^8 * 3^4 * 3^1
it follows
       1   if n=0
a^n=   a^(n/2) * a^(n/2)    if n%2==0
       a^((n-1)/2) * a^((n-1)/2) * a    if n%2==1
*/

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)  //if b is odd
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}




// (a^b)%m using binary when b is very large
long long binpowr(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
