#include <stdio.h>
#include <cs50.h>
int main()
{
   int length = get_int("enter a number: ");
   int num[length];
   for(int i=0; i<length;i++)
   {
       num[i] = get_int("input value: ");
   }
   for(int i=0;i<length;i++)
   {
       printf("%i\n",num[i]);
   }
}
