#include <stdio.h>
int main()
{ 
    char x ;
    printf("Enter your character to be identified.");
    scanf("%c",&x);
    if (x>='a' && x<='z') {
     printf("Your entered character is a lowercase letter");
    } else if (x>='A' && x<='Z'){
     printf("Your entered character is an uppercase letter");
      } else if (x>='0' && x<='9'){
     printf("Your entered character is a digit ");
     } else { 
      printf("Your entered character is a special character ");
   }
 return 0;
}
      
     
       