#include<stdio.h>

int fill_color(int,char**);

int main(int argc, char const *argv[])
{
    int picture_columns,i,fills;
    char picture[50][10];

    printf("Enter picture_columns: ");
    scanf("%d",&picture_columns);

    printf("Enter array elements: ");
    for(i=0;i<picture_columns;i++)
    {
        scanf("%s",&picture[i]);
    }

    fills=fill_color(picture_columns,picture);

    printf("%d",fills);

    return 0;
}

int fill_color(int picture_columns,char** picture)
{
    int fill=0,i,j,a=0,b=0,c=0;

    for(i=0;i<picture_columns;i++)
    {
        for(j=0;j<strlen(picture[i]);j++)
        {
            char ch=picture[i][j];
            switch(ch)
            {
                case 'a':a+=2;break;
                case 'b':b+=2;break;
                case 'c':c++;break;
            }
        }
        fill=a+b+c;
    }

    return fill;
}