#include<stdio.h>

#define CHARS 26

int anagram(char[],char[],int);

int main()
{
  char arr1[20],arr2[20];
  int i,n,result;
  
  scanf("%d",&n);
  
  scanf("%s",&arr1);
  
  scanf("%s",&arr2);
  
  result=anagram(arr1,arr2,n);
  
  printf("%d",result);
}

int anagram(char a1[],char a2[],int n)
{
  int i,count1[CHARS]={0},count2[CHARS]={0};
  
  for(i=0;i<n;i++)
    count1[a1[i]-'A']++;
  
  for(i=0;i<n;i++)
    count2[a2[i]-'A']++;
  
  for(i=0;i<CHARS;i++)
    printf("%d ",count1[i]);
  printf("\n");
  for(i=0;i<CHARS;i++)
  printf("%c ",i+'A');
  printf("\n");
  for(i=0;i<CHARS;i++)
    printf("%d ",count2[i]);
  
  for(i=0;i<CHARS;i++)
    if(count1[i]!=count2[i])
      return 0;
    
  return 1;
}