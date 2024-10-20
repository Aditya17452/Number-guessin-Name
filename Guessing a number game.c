
include <stdio.h>
#include<stdlib.h>

int rno(int min,long int max){
    
    long int rnum = rand()%(max-min) + min;

    return rnum;
}

int main()
{
   long int n = rno(0,100);
   
   
   
   printf("\n*************** WELCOME TO NUMBER GUESSING GAME *************** ");
   printf("\n\n");
   printf("\n You have given 5 Chances to guess number ");
   printf("\n");
   printf("\nGuessing done between 0 to 100, If you want to change press 'Y' otherwise press 'N' ");
   printf("\n");
   char ch;
   printf("\nEnter you choice : ");
   scanf("%c",&ch);
   printf("\n");
   if(ch=='Y'|| ch=='y'){
       int m1,m2;
       printf("\n Enter your miniumum and maximum value : ");
       scanf("%d %d",&m1,&m2);
     n  = rno(m1,m2);
     
   }
   printf("\n");
   
   
   
   int f=0;
   while(f!=5){
       
       int n1;
       printf("\nEnter your guess number : ");
       scanf("%d",&n1);
       printf("\n");
       if(n1==n){
           printf("\nYou Win ");
           break;
       }
       
       else if(n1>n){
           printf("\nGuess less number ");
           
       }
       else if(n1<n){
           printf("\nGuess large number ");
       }
       f=f+1;
    }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

    return 0;
}
