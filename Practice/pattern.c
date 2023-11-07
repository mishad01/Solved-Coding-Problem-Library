#include<stdio.h>
int main(){
   int x,y,mod,numerat,denomi,lessnumert,lessdenomi;
   printf("enter the fraction by using / operator:");
   scanf("%d/%d", &x,&y);
   numerat=x;
   denomi=y;
   switch(y){
      case 0:printf("no zero's in denominator\n");
      break;
   }
   while(mod!=0){
      mod= x % y;
      x=y;
      y=mod;
   }
   lessnumert= numerat/x;
   lessdenomi=denomi/x;
   printf("lowest representation of fraction:%d/%d\n",lessnumert,lessdenomi);
   return 0;
}
