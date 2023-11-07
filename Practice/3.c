#include <stdio.h>
int main() {
   int num1, num2;
   int GCD;

   printf("Enter a fraction: ");
   scanf("%d/%d", &num1, &num2);

   if (num1 < num2){
      GCD = num1;
   } else {
      GCD = num2;
   }

   if (num1 == 0 || num2 == 0){
      printf("simplified fraction is %s\n", num1?"Infinity":"0");
   }
   while (GCD > 1) {
      if (num1 % GCD == 0 && num2 % GCD == 0)
         break;
      GCD--;
   }
   printf("Final fraction %d/%d\n", num1 / GCD, num2 / GCD);
   return 0;
}
