// Find the volume of cylinder
#include <stdio.h>
int main(void)
{
 float  d,h,a,v,pie =3.14 ;
    printf("Enter cylinder diamter =");
    scanf("%f",&d);
    
    printf("Enter height of cylinder =");
    scanf("%f",&h);
   
    a= pie * ( d * d / 4 ) ;
    v = a * h ;
   
      printf("the Volume is %.3f \n ",v);
          return 0;
}
