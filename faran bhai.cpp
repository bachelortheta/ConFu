//
//  main.cpp
//  lab8withpointers
//
//  Created by Faran Mushtaq on 19/11/2012.
//  Copyright (c) 2012 Faran Mushtaq. All rights reserved.
//

#include <iostream>
#include <conio.h>
using namespace std;
int counter=0;

class node
{
public:
    int data;
    node *next;
};

class queue
{
public:
    node *front;
    node *rear;
    queue()
    {
        front=rear=NULL;
    }
    
    void addqueue(int a)
    {
        node *temp=new node;
        temp->data=a;
        
        if(front==NULL)
        {
            front=rear=temp;
            temp->next=NULL;
        }
        else
        {
            rear->next=temp;
            rear=temp;
            temp->next=NULL;
        }
    }
    
    void display()
    {
        node *temp1;
        temp1=front;
        while(temp1!=NULL)
        {
            cout<<temp1->data<<endl;
            temp1=temp1->next;
        }
    }
    
    int dequeue()
    {
        node *temp;
        int a;
        temp=front;
        if(front==NULL)
            cout<<"there is no value in the queue"<<endl;
        a=temp->data;
        front=front->next;
        delete temp;
        return a;
        
    }
    
    int plaindrome()
    {
        int test=0,run=0;
        node *temp;
        for(int i=counter/2; i>0; i--)
        {
            if(front->data==rear->data)
            {
                
                cout<<"match "<<i<<endl;
                test++;
            }
            if(run==2)
                break;
            front=front->next;
            temp=front;
            
            while(temp->next!=rear)
            {
                temp=temp->next;
            }
            rear=temp;
            run++;
            
            
        }
        
        if(test==3)
            cout<<"It is plaindrome"<<endl;
        else
            cout<<"It is not plaindrome"<<endl;
        
    }
    
    
};

int main()
{
    int alpha,beta,gamma,alpha1;
    queue data1,data2;
    while(alpha!=-1)
    {
        cout<<"Enter the data -1 to stop"<<endl;
        cin>>alpha;
        if(alpha==-1)
            break;
        data1.addqueue(alpha);
        
    }
    
    data1.display();
    beta=1;
    
    while(beta==1)
    {
        cout<<"Press 1 to remove data from queue"<<endl;
        cin>>beta;
        if(beta!=1)
            break;
        
        gamma=data1.dequeue();
        cout<<"The data removed from the list is"<<endl;
        cout<<gamma<<endl;
    
    }
    
    cout<<"The data left in the list is:"<<endl;
    
    data1.display();
    
    cout<<"Enter the data for the plaindrome test"<<endl;
    
    while(alpha1!=-1)
    {
        cout<<"Enter the data"<<endl;
        cin>>alpha1;
        if(alpha1==-1)
            break;
        data2.addqueue(alpha1);
        counter++;
        
    }
    
    data2.plaindrome();
    
    
}

