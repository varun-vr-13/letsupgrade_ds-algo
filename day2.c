

// Write the program for deleting an element from the beginning and from any position.

#include<stdio.h>
int first(int *a,int n){
    int i;
    if(n<=0){return 0;
    }
    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }
    printf("Array after deletion:\n");
    for(i=0;i<n-1;i++) {printf("%d ",a[i]);}
    return 0;
}

int pos(int *a,int n){
    int i,k;
      
    printf("ENter position of elem to be deleted:\n");
    scanf("%d",&k);
    if(k>n){
        printf("exit");return 0;}
    for(i=k-1;i<n;i++){
        a[i]=a[i+1];
    }
    printf("Array after deletion:\n");
                for(i=0;i<n-1;i++) {printf("%d ",a[i]);}
    return 0;
}
int main(){
    int x,i,n=0,k;
    printf("Enter size of the array : \n");
    int a[n+1];
    scanf("%d",&n);
    printf("Enter elements of the array : \n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Array elements are : \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
    while(1){
        printf("\n\n%d\n\n",n);
    printf("\nSelect an option:\n1:Delete 1st element :\n2:Delete last element : \n3:Delete element at a given position:\n4:EXIT\n");
    scanf("%d",&x);
    printf("--%d--\n",x);
    switch(x){
        case 1:first(a,n);n-=1;
        break;
        case 2:if(n>0){
        printf("Array after deletion:\n");
        n-=1;
                for(i=0;i<n;i++) {printf("%d ",a[i]);}}
        break;
        case 3:pos(a,n);n-=1;
        break;
        case 4:printf("exit");return 0;
        default:printf("exit");return 0;
    }
    }
}

/*
OUTPUT
___________________
Enter size of the array : 
5
Enter elements of the array : 
1 2 3 4 5
Array elements are : 
1 2 3 4 5 


5


Select an option:
1:Delete 1st element :
2:Delete last element : 
3:Delete element at a given position:
4:EXIT
1
--1--
Array after deletion:
2 3 4 5 

4


Select an option:
1:Delete 1st element :
2:Delete last element : 
3:Delete element at a given position:
4:EXIT
2
--2--
Array after deletion:
2 3 4 

3


Select an option:
1:Delete 1st element :
2:Delete last element : 
3:Delete element at a given position:
4:EXIT
3
--3--
ENter position of elem to be deleted:
1
Array after deletion:
3 4 

2


Select an option:
1:Delete 1st element :
2:Delete last element : 
3:Delete element at a given position:
4:EXIT
1
--1--
Array after deletion:
4 

1


Select an option:
1:Delete 1st element :
2:Delete last element : 
3:Delete element at a given position:
4:EXIT
2
--2--
Array after deletion:


0


Select an option:
1:Delete 1st element :
2:Delete last element : 
3:Delete element at a given position:
4:EXIT
4
--4--
exit

____ */


--------------------------------------------------------------------------------------------------------------
/* Write the program for printing the array after rotating it k times towards left, where k would be taken as user input. */

#include<stdio.h>
int rot(int *a,int n){
    int i,k=a[0];
    for(i=0;i<n;i++){
        a[i]=a[i+1];
    }
    a[i-1]=k;
 
return 0;
}
int main(){
    int n=0,i,k;
     printf("Enter size of the array : \n");
    int a[n+1];
    scanf("%d",&n);
    printf("Enter elements of the array : \n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Array elements are : \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
    printf("Enter num of rotations:\n");
    scanf("%d",&k);
      printf("Array after %d rotations is : \n",k);
    if(k>n){
        k=k%n;
    }
    while(k>0){
        rot(a,n);
        k-=1;
    }
  for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

/* 
	OUTPUT 
----------------------
Enter size of the array : 
5
Enter elements of the array : 
1 2 3 4 5
Array elements are : 
1 2 3 4 5 
Enter num of rotations:
7
Array after 7 rotations is : 
3 4 5 1 2 

*/
