#include <stdio.h>
#include <string.h>

int main(void) 
{
   char str[] = "the worst thing to eat befeore you sleep";
   char dst[100];

   strcpy(dst, str);

   printf("Copied string: %s\n", dst);
  
    return 0;
}