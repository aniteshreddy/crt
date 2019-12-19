/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int n,fib,fib1=0,fib2=1;
  scanf("%d",&n);
  printf("%d  %d  ",fib1,fib2);
  for(int i=1;i<=n-2;i++){
      fib=fib1+fib2;
      fib1=fib2;
      fib2=fib;
      printf("%d  ",fib);
  }
  return 0;
}
