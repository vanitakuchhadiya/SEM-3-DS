// WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS
// [e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].
#include<stdio.h>
void main(){
    int hh,mm,ss,sec;
    printf("Enter a value of seconds: ");
    scanf("%d",&sec);
    hh=sec%3600;
    sec=sec/3600;
    mm=sec%60;
    sec=sec/60;
    ss=sec;
    printf("%d:%d:%d (%d Hour,%d Minutes,%d Seconds)",hh,mm,ss);
}