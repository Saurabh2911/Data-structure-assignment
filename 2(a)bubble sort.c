//Sorting of elements of array using bubble sort.
#include<stdio.h>
  int* bubble_sort(int *ptr,int l) //function of bubble sort.
  {
      int i,j,temp;
      for(j=0; j<l;j++)
      {
          for(i=0;i<l-1-j ;i++)
          {
              if(ptr[i]>ptr[i+1])
              {
                  temp=ptr[i] ;   //swaping of numbers
                  ptr[i]=ptr[i+1];
                  ptr[i+1]=temp;
              }
          }

      }
      return ptr;
  }

  int main() //call of main function.
  {
    int n;
   printf("Enter the size of array:-");
   scanf("%d",&n);
   int *ptr;
   ptr=(int *)malloc(n*sizeof(int)); //dynamic memory allocation
   if(ptr==NULL)
    printf("Memory not succesfully alloacate \n");
   else
    printf("Memory  succesfully alloacate \n");

   printf("Enter the elements of array \n");
   for(int a=0;a<n;a++)
   {
       scanf("%d",&ptr[a]);
   }
  int *sort_arr=bubble_sort(ptr,n); //calling of bubble sort function
  printf("Elements after sorting (using bubble sort)are: \n");
  for(int d=0;d<n;d++)
   {
	   printf("%d  ",sort_arr[d]);
   }

      return 0;
}
