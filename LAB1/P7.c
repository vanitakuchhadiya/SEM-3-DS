// WAP to convert number of days into year, week & days 
// [e.g. 375 days mean 1 year, 1 week and 3 days].
#include<stdio.h>
void main(){
    int year,week,day,days;
    printf("Enter a value of seconds: ");
    scanf("%d",&days);
    
    year=days/365;
    week=(days%365)/7;
    days=(days%365)%7;
    printf("%d year, %d week and %d days",year,week,day);
}
