 #include<stdio.h>
 int main ()
 {
     int a;
     int n;
     int i;
     int even,odd;
     printf ("Input Number ");
     scanf ("%d",&n);
     printf ("Even\n");
     for (i=0;i<n;i++)
     {
         if (i%2 == 0)
         {
             printf ("%d ",i);
         }

     }


      ("Odd\n");
     for (i=0;i<n;i++){
     if(i%2 != 0)
         {
           printf ("%d ",i);
         }
     }
 }
