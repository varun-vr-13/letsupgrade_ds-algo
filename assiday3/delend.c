#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL;
int insert_any(int pos,int d){
   
    int c=0,f=0;
 node *temp1,*q;
node *temp=(node *)malloc(sizeof(node));
temp->data=d;
temp->next=NULL;
if(pos==0 && head==NULL){
    head=temp;
}
else if(pos==0){
    temp->next=head;
    head=temp;
}

else{
        temp1=head;
    while(temp1!=NULL && c<pos){
            q=temp1;
            temp1=temp1->next;
            c+=1;
            f=1;
    }
    if(c<pos){
        q->next=temp;
    }
       else{     q->next=temp;
                temp->next=temp1;
       }

    }
    return 0;
}
void deletee(){

    node *temp,*p;
        temp=head;
        while(temp->next!=NULL ){
            p=temp;
            temp=temp->next;
            
        }
      
            p->next=NULL;
      

}
void display(){
struct node *p;
p=head;
while(p!=NULL){
    printf(" %d -> ",p->data);
    p=p->next;
}
}
int main(){

int i,j,c=0,k,x;
insert_any(0,9);
insert_any(1,7);
insert_any(2,6);
insert_any(1,8);
while(1){
    printf("Enter Your Choice : \n");
    printf(" 1 delete last element : \n 2 display : \n 3 Exit:\n");
    scanf("%d",&x);
    switch(x){
    case 1:deletee();
            break;
    case 2:display();
    printf("\n");
            break;
    case 3:return;
    default:return;
    }
}


}

/*
    OUTPUT
  ------------
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
2
 9 ->  8 ->  7 ->  6 -> 
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
1
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
2
 9 ->  8 ->  7 -> 
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
1
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
2
 9 ->  8 -> 
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
1
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
2
 9 -> 
Enter Your Choice : 
 1 delete last element : 
 2 display : 
 3 Exit:
3



*/