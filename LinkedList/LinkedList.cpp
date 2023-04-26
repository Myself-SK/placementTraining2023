#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *address;
		
		Node(){
			address=NULL;
		}
};
class LinkedList{
	Node *head =  NULL;
	public:
	void beginInsert(){
		Node *nn = new Node();
		cout<<"enter data for Node: \n";
		cin>>nn->data;
		if(head==NULL){
			head=nn;
		}
		else{
			nn->address=head;
			head=nn;
		}
	}
	void lastInsert(){
		Node *nn = new Node();
		Node *temp = new Node();
		if(nn==NULL)
			cout<<"Overflow"<<endl;
		else{
			cout<<"Enter Value: \n";
			cin>>nn->data;
			if(head==NULL){
				nn->address = NULL;
				head=nn;
				cout<<"Node Inserted"<<endl;
			}
			else{
				temp = head;
				while(temp->address != NULL)
					temp=temp->address;
				temp->address = nn;
				nn->address = NULL;
				cout<<"Node Inserted"<<endl;
			}
		}
	}
	void display(){
		Node *node;
		node = head;
		if(node == NULL)
			cout<<"SLL is Empty"<<endl;
		else{
			cout<<"\nLinked List Values:"<<endl;
			while(node!=NULL){
				cout<<node->data<<" ";
				node=node->address;
			}
		}
	}
};
int main(){
	LinkedList l;
    int choice =0;  
    while(choice != 10)   
    {  
        cout<<"\nChoose one option from below ...\n";  
        cout<<"\n===============================================\n";  
cout<<"\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n 7. search for an element\n8.display\n9.Exit\n";  
        cout<<"\nEnter your choice?\n";         
        cin>>choice;  
        switch(choice)  
        {  
            case 1:  
            l.beginInsert();      
            break;  
            case 2:  
            l.lastInsert();         
            break;  
            
            case 8:  
            l.display();        
            break; 
			case 9:
				return 0;
				break; 
            default:  
            cout<<"Please enter valid choice..";  
        }  
    }  
}  

