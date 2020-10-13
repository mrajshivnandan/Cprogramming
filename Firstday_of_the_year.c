/*
    Author Raj Mishra
    Date 13 Oct 2020

    Just Enter the Year and get the first Day of that year
*/
#include <stdio.h>

int main()
{
    int day= 6;
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year==2000)
        day= 6;
    if(year>2000 && year<10000){
        for(int i=2001;i<=year;i++){
            if((i-1)%4!=0)
                day= day+1;
            else if((i-1)%100== 0 && (i-1)%400!= 0)
                day= day+1;
            else if((i-1)%400== 0)
                day= day+2;
            else
                day= day+2;
            if(day==8)
                day= 1;
            else if(day==9)
                day= 2;
        }
    }
    else if(year<2000 && year>999){
        for(int i=1999;i>=year;i--){
            if((i)%4!=0)
                day= day-1;
            else if(i%100== 0 && i%400!= 0)
                day= day-1;
            else if(i%400== 0)
                day= day-2;
            else
                day= day-2;
            if(day==0)
                day= 7;
            else if(day==-1)
                day= 6;
        }
    }
    else{
        printf("\nEnter proper values between 1000 to 9999\n");
        day= 10;
    }
    switch(day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }
     if(year<=2020)
        printf(" was the first day in the year %d \n", year);
    if(year>2020)
        printf(" will be the first day in the year %d \n", year);
    return 0;
}