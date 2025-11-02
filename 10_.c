#include <stdio.h>

int main(){
    int time, hours, minutes, second;
    printf ("enter the time in second:");
    scanf ("%d",&time);
    hours = time/3600;
    minutes = (time%3600)/60;
    second = time/60;
    printf ("time = %d:%d:%d",hours,minutes,second);
    return 0;
}