/*
ALGORITHM

Begin
   if start <= end then
      midFirst := start + (end - start) /3
      midSecond := midFirst + (end - start) / 3
      if array[midFirst] = key then
         return midFirst
      if array[midSecond] = key then
         return midSecond
      if key < array[midFirst] then
         call ternarySearch(array, start, midFirst-1, key)
      if key > array[midSecond] then
         call ternarySearch(array, midFirst+1, end, key)
      else
         call ternarySearch(array, midFirst+1, midSecond-1, key)
   else
      return invalid location
End

*/

 
int ternarySearch(int a[], int start, int end, int key) {
   if(start <= end) {
      int midFirst = (start + (end - start) /3); //mid of first and second block
      int midSecond = (midFirst + (end - start) /3); //mid of first and second block
      if(a[midFirst] == key)
         return midFirst;
      if(a[midSecond] == key)
         return midSecond;
      if(key < a[midFirst])
         return ternarySearch(a, start, midFirst-1, key);
      if(key > a[midSecond])
         return ternarySearch(a, midSecond+1, end, key);
      return ternarySearch(a, midFirst+1, midSecond-1, key);
   }
   return -1;
}
int main(void)
{

    int i,j, n, key,a[100];
 printf("ENter size of the array\n");
scanf("%d",&n);
printf("Enter array elements : \n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("ENter key to be searched : \n");
scanf("%d",&key);
j=ternarySearch(a,0,n-1,key);
printf("Index of %d is %d ",key,j);
}

/* OUTPUT
ENter size of the arrays
8
Enter array elements : 
10 30 68 17 56 89 98 66 
ENter key to be searched : 
30
Index of 30 is 1 
*/