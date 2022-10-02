# include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*top=NULL;

void push(){
    struct node *temp;
    int val;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"\t enter the data \n";
    cin>>val;
    temp->data=val;
    temp->next= top;
    top= temp;
}

void pop(){
    struct node *ptr;
    if (top==NULL)
    cout<<"\nstack is empty!!!!!!!!!!!!";
    else{
        ptr=top;
        top = ptr->next;
        free(ptr);
        cout <<"element poped\n";
    }
}

void dis(){
    struct node* ptr;
    ptr= top;
    cout<<"stack element :\t";
    while (ptr!=NULL){
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
int main(){

     push();
     pop();
     dis();
    return 0;
}