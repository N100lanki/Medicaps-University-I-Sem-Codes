#include<stdio.h>
#include<stdlib.h>
int binarysearch()
{
  int i, first, last, middle, n, search, array[10];
  printf("Enter number of elements :upto 100!!\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i <n; i++)
    scanf("%d", &array[i]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}
int linearsearch()
{
 int size,i,s,arr[100],temp=0;
 printf("Enter elements of array :upto 100 !!\n");
 scanf("%d",&size);
 printf("\n enter arrry elements");
   for(i=0;i<size;i++)
   {
     scanf("%d",&arr[i]);
   }		
 printf("Enter an element to search in array");
 scanf("%d",&s);		
 for(i=0;i<size;i++)
  {		
	if(s==arr[i])
    {
	    printf("Element found at %d index",i);
	    temp=1;		
	}
  }
  if(temp==0)
   {
	printf("element not found"); 
   }
 return 0 ;
}

int  main()
{
    int ch;
    while(1)
    {
    printf("\n1.For Binary Search :\n 2. For Linear Search \n Choose And Prss Enter!!");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
        binarysearch();
        break;  
    case 2 :
        linearsearch();
        break;  
    case 3 : exit(0);
    default: printf("invalid Selection");
        break;
    }
    }
}
