//program to sort the string using merge sort.
#include <stdio.h>
 char str[20];
 char str1[20];
void merging(int p, int q, int r)//funtion for merging process.
{
   int  i;
  int l1=p,r1=q+1 ;
   for( i = p; l1 <=q && r1<= r; i++)
    {
      if(str[l1] <= str[r1])
      {
         str1[i] = str[l1];
         l1++;
      }
      else
      {
         str1[i] = str[r1];
         r1++ ;
     }
   }

   while(l1<= q)
   {
      str1[i] = str[l1];
      i++;
      l1++;
   }

   while(r1<= r)
     {
      str1[i] = str[r1];
      i++;
      r1++;
    }
   for(i = p; i <= r; i++)
      str[i] = str1[i];
}

void merge_sort(int p, int r) // function for merge sort
{

   if(p < r)
  {
     int q=((p+r)/2);
      merge_sort(p, q);     //recursive call of merge sort function
      merge_sort(q+1,r);    //recursive call of merge sort function
      merging(p,q,r);       //call of merging function
   }
   else
    {
      return;
    }
}

int main() //call of main function.
 {

   printf("Enter the string \n");
   gets(str);
   printf("String that you entered are:\n");
   puts(str);
   int l=strlen(str);
    merge_sort(0,l-1);    //call of merge sort function
    printf("string after sorting\n");
    puts(str);
    return 0;
}
