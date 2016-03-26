#include <bits/stdc++.h> 

using namespace std;
struct student
{int num;
    float score;
    student *next;
    
};
int n;
student *creat(void){
    student *head;
    student *p1,*p2;
    n=0;
    p1=p2=new student;
    cin>>p1->num>>p1->score;
    head=NULL;
    while (p1->num!=0){
        n=n+1;
        if (n==1)head=p1;
        else p2->next=p1;
        p2=p1;
        p1=new student;
        cin>>p1->num>>p1->score;
    }
    p2->next=NULL;
    return(head);
}
void print(student *head){
    student *p;
    p=head;
        do
        {
        cout<<p->num<<" "<<p->score<<endl;
        p=p->next;
        }
        while (p!=NULL);

}
student *del(student *head,int num){
    student *p1,*p2;
    if (head==NULL){
        cout<<"An empty list!"<<endl;
        return(head);
    }
    p1=head;
    while (num!=p1->num&&p1->next!=NULL){
        p2=p1;
        p1=p1->next;
    }
    if (num==p1->num){
        if (p1==head)head=p1->next;
        else p2->next=p1->next;
        cout<<"Delete success!";
        n=n-1;

    }
    else cout<<"can not find "<<num;
    return (head);

}
student *insert(student *head,student *stud)
{
student *p0,*p1,*p2;
p1=head;
p0=stud;
if (head==NULL){
    head=p0;p0->next=NULL;
}
else
{
    while((p0->num>p1->num)&&(p1->next!=NULL)){
        p2=p1;
        p1=p1->next;

    }
    if (p0->num<=p1->num)
        {if (head==p1)head=p0;
            else  
            p2->next=p0;
            p0->next=p1;
        }
        else 
            {p1->next=p0;p0->next=NULL;}
    
    n=n+1;
    return (head);
}



}
int main()
{student *creat(void);
    student *del(student *,int);
    student *insert(student *,student *);
    void print(student *);
    student *head,stu;
    int del_num;
    cout<<"input records:"<<endl;
    head=creat();
    print(head);
    cout<<endl<<"input the deleted number:";
    cin>>del_num;
    head=del(head,del_num);
    print(head);
    cout<<endl<<"input the inserted record:";
    cin>>stu.num>>stu.score;
    head=insert(head,&stu);
    print(head);
    return 0;
    

}