#include <stdio.h>
//upper
//lower
//special xar
//digit
int leap_year();

int main() 
{
  int year, month, day;
  printf("Enter day : ");
  scanf("%d",&day);
  printf("Enter Month : ");
  scanf("%d",&month);
  printf("Enter Year : " );
  scanf("%d",&year);

  if (leap_year(year)==1){
    if (day<=29 && month==2){
      printf("true");
    }
    else if ((day<=30) && (month==4||month==6||month==9||month==11)){
      printf("%d/%d/%d your date is correct\n",day,month,year);
    }
    else if ((day<=31) && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
      printf("%d/%d/%d your date is correct\n",day,month,year);
      
    }
    else{
      printf("You Entered Wrong Date\n");
    }
  }

  else if (leap_year(year)==0){
    if (day<=28 && month==2){
      printf("true");
    }
    else if ((day<=30) && (month==4||month==6||month==9||month==11)){
      printf("%d/%d/%d your date is correct\n",day,month,year);
    }
    else if ((day<=31) && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
      printf("%d/%d/%d your date is correct\n",day,month,year);
    }
    else{
      printf("You Entered Wrong Date\n");
    }
  }

}
 

int leap_year(int x){
  int y;
  

 if (x%400==0){
  y=1;
 }
 else if (x%100==0){
    y=0;
 }
 else if (x%4==0){
   y=1;
 
 }

   else{
       y=0;
   }
   return y;
}




