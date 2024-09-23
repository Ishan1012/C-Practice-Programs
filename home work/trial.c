#include <stdio.h>
#include <string.h>

struct date
{
    int ddate;
    int month;
    int year;
};

typedef struct cust
{
    char Customer_Name[100]; 
    char Mobile_No[100];
    int Room_No;
    char Room_type[100];
    float Per_day_room_charge;
    struct date Check_in_Date; 
    struct date Check_out_date;
} customer;

int get_diff(struct date,struct date);

int main()
{
    int n,i;
    customer c[1000];
    double amt[1000];
    
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++)
        scanf("%s %s %d %s %f %d-%d-%d %d-%d-%d",c[i].Customer_Name,c[i].Mobile_No,&c[i].Room_No,c[i].Room_type,
              &c[i].Per_day_room_charge,&c[i].Check_in_Date.ddate,&c[i].Check_in_Date.month,
              &c[i].Check_in_Date.year,&c[i].Check_out_date.ddate,&c[i].Check_out_date.month,
              &c[i].Check_out_date.year);
    
    for(i=0;i<n;i++)
        amt[i]=(double)c[i].Per_day_room_charge*get_diff(c[i].Check_in_Date,c[i].Check_out_date);
    
    for(i=0;i<n;i++)
        printf("%s %s %d %d-%d-%d %d-%d-%d %lf",c[i].Customer_Name,c[i].Mobile_No,c[i].Room_No,
               c[i].Check_in_Date.ddate,c[i].Check_in_Date.month,
               c[i].Check_in_Date.year,c[i].Check_out_date.ddate,c[i].Check_out_date.month,
               c[i].Check_out_date.year,amt[i]);
    
    return 0;
}

int get_diff(struct date check_in_date,struct date check_out_date)
{
    int d1,m1,y1,d2,m2,y2,date1,date2,i;
    
    d1=check_in_date.ddate;
    m1=check_in_date.month;
    y1=check_in_date.year;
    d2=check_out_date.ddate;
    m2=check_out_date.month;
    y2=check_out_date.year;
    
    if((d1>28 && m1==2)||(d1>30 && (m1==4||m1==6||m1==9||m1==11))
       ||(d1>31&&(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)))
    {
        printf("INVALID DATE!");
        return -1;
    }
    
    if((d2>28 && m2==2)||(d2>30&&(m2==4||m2==6||m2==9||m2==11))
       ||(d2>31&&(m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)))
    {
        printf("INVALID DATE!");
        return -1;
    }
    
    //Finding date 1 w.r.t. 1-jan-00 
    date1=(y1-1)*365+(y1/400)+(y1/4)-(y1/100)+d1-1;
    for(i=1;i<m1;i++)
        date1+=(i==2)?28:(i==4||i==6||i==9||i==11)?30:31;
    
    //Finding date 2 w.r.t. 1-jan-00 
    date2=(y2-1)*365+(y2/400)+(y2/4)-(y2/100)+d2-1;
    for(i=1;i<m2;i++)
        date2+=(i==2)?28:(i==4||i==6||i==9||i==11)?30:31;
    
    printf("%d %d %d\n",date2,date1,date2-date1);
    return date2-date1;
    
}

//test case 
//ishan 9415453538 504 16-10-2019 22-3-2023 9397.500000