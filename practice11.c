# include<stdio.h>// making the calender using array and string.

int get_1st_weekdays(int year);

int main(){

int year,month,daysinmonth,day,count,startingday;
printf("enter the desire year:");
scanf("%d", &year);

char *months[]= {"january","february","march", "april","may","june","july","august", "september","october","november","december"};
int monthdays[] ={31,28,31,30,31,30,31,31,30,31,30,31}; 

startingday=get_1st_weekdays(year);



for(month=0;month<12;month++){

    daysinmonth = monthdays[month];

printf("\n-------------%s-------------\n", months[month]);
printf("\n sun  mon  tue  wed  thu  fri  sat\n");




for(count=0;count<startingday;count++){
    printf("     ");
}




for(day=1;day<=daysinmonth;day++){

printf("%5d", day);
count++;

if(count>6){
    printf("\n");
    count=0;
}
startingday=count;

}

}

    return 0;
}
int get_1st_weekdays(int year){

    int d;
    d = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
    return d;
}