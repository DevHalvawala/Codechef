#include <stdio.h> 
//#include <bits/stdc++.h>
#include <stdlib.h> 

struct Node {
	int data;
	struct Node* next;
	Node(){
        next = NULL;
    }
	Node(int x){
		data = x;
		next = NULL;
	}
};

Node* merge(vector<Node*> v)
    {
    vector<int>store;
    for(int i=0;i<v.size();i++)
        {
            Node *ptr=v[i];
            while(ptr!=NULL)
            {
                store.push_back(ptr->data);
                ptr=ptr->next;
            }
        }
        sort(store.begin(),store.end());
        Node *ptr=new Node();
        Node *aux=ptr;
        for(int i=0;i<store.size();i++)
        {
            Node *temp=new Node(store[i]);
            temp->next=NULL;
            ptr->next=temp;
            ptr=ptr->next;
        }
        return aux->next;
    
    }