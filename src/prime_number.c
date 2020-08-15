#include "prime_number.h"
int prime_number(int number)
{
   int i;
 // Run a loop to check if the number is divisible by any other integer except 1 and itself
   for ( i = 2 ; i <= number - 1 ; i++ )
   {
      if ( number%i == 0 )
     return 0;
   }
   return 1;
}
