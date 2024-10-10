# include <stdio.h>
# include <string.h>

typedef struct date{
    int date;
    int month;
    int year;
}date;

int datecmp(date d1, date d2){
    if(d1.year>d2.year){
        return 1;
    }
   if(d1.year<d2.year){
        return -1;
   }
    if(d1.month>d2.month){
        return 1;
    }
   if(d1.month<d2.month){
        return -1;
   }
    if(d1.date>d2.date){
        return 1;
    }
   if(d1.date<d2.date){
        return -1;
   }
   return 0;
}
void display(date d){
    printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}
int main(){
   date d1 = {2, 8 ,1995};
   date d2 = {2,8,1995};
   display (d1); 
   display (d2);
    printf("%d",datecmp(d2,d1));
return 0;
}