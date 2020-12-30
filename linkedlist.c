#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL;
int insert_any(int pos,int d){
    pos-=1;
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
int deletee(int pos){

    node *temp,*p;
    pos-=1;
    int c=0;
    if(pos==0){
        if(head->next==NULL){
            free(head);
        }
        else{
            p=head;
            head=head->next;
        }
    }
    else{
        temp=head;
        while(temp!=NULL && c<pos){
            p=temp;
            temp=temp->next;
            c+=1;
        }
        if(temp->next==NULL){
            p->next=NULL;
        }
        else{
            p->next=temp->next;
        }
    }
return 0;
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
while(1){
    printf("Enter Your Choice : \n");
    printf(" 1 insert element : \n 2 delete element : \n 3 display : \n 4 Exit:\n");
    scanf("%d",&x);
    switch(x){
    case 1: printf("Enter position and data : \n");
            scanf("%d %d",&i,&j);
            insert_any(i,j);
            break;
    case 2:printf("Enter position of the element : \n");
            scanf("%d",&k);
            deletee(k);
            break;
    case 3:display();
    printf("\n");
            break;
    case 4:return;
    default:return;
    }
}


}


/* OUTPUT
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
1
Enter position and data :
1 9
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
1
Enter position and data :
2 7
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
1
Enter position and data :
3 6
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
1
Enter position and data :
2 8
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
3
 9 ->  8 ->  7 ->  6 ->
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
2
Enter position of the element :
1
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
3
 8 ->  7 ->  6 ->
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
2
Enter position of the element :
2
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
3
 8 ->  6 ->
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
2
Enter position of the element :
2
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
3
 8 ->
Enter Your Choice :
 1 insert element :
 2 delete element :
 3 display :
 4 Exit:
4


*/
