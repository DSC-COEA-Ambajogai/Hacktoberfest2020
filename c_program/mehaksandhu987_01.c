#include <stdio.h>
int main()
{
printf("You need table of which number?");
scanf("%i", no);
printf("Upto which number you need table?");
scanf("%i", upto);
for (int i = 0; i <= upto; i++)
{
  int result = no * i;
  printf("%i × %i = %i", no, i, result);
}


}
