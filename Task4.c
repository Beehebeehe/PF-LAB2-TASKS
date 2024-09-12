#include <stdio.h>
int main()
{  
   int cost,savedAmount,afterDiscount ;
   printf("Enter your cost of item:\n");
   scanf("%d",&cost);
  if (cost < 500){
   printf("Your actual cost was %d Rs\n",cost);
   printf("Your item cost is below minimum eligible discount cost so you get 0 discount ,cost after discount remains same.");
 } else if (cost>=500 && cost<2000){
   afterDiscount = cost -(cost *0.05);
  savedAmount = cost - afterDiscount;
  printf("Your actual cost was %d Rs\n",cost);
  printf("Your cost after discount was %d Rs\n",afterDiscount);
  printf("You saved %d Rs",savedAmount);

  } else if (cost>=2000 && cost<4000){
   afterDiscount = cost -(cost *0.10);
  savedAmount = cost - afterDiscount;
  printf("Your actual cost was %d Rs\n",cost);
  printf("Your cost after discount was %d Rs\n",afterDiscount);
  printf("You saved %d Rs",savedAmount);

 } else if (cost>=4000 && cost<6000){
  afterDiscount = cost -(cost *0.20);
  savedAmount = cost - afterDiscount;
  printf("Your actual cost was %d Rs\n",cost);
  printf("Your cost after discount was %d Rs\n",afterDiscount);
  printf("You saved %d Rs",savedAmount);

 } else if (cost>=6000) {
     afterDiscount = cost -(cost *0.35);
  savedAmount = cost - afterDiscount;
  printf("Your actual cost was %d Rs\n",cost);
  printf("Your cost after discount was %d Rs\n",afterDiscount);
  printf("You saved %d Rs",savedAmount);
}
return 0;
}