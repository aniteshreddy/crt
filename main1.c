/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n;
  printf("enter a number");
  scanf("%d,&n");
  if(n%5==0)
  printf("number is valid");
  else if(n%11==0)
  printf("number is valid");
  else printf("invalid");
  return 0;
}
