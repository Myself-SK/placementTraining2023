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
	void reverse_list() {
	    Node *prev = NULL;
	    Node *current = head;
	    Node *next = NULL;
	
	    while (current != NULL) {
	        next = current->address;
	        current->address = prev;
	        prev = current;
	        current = next;
	    }
	    head = prev;
	}
	
	
	void removeDuplicates()
	{
	 Node *prev = NULL,*current = head,*next = NULL,*dup=NULL, *temp=NULL;
    int flag;
    while (current != NULL && current->address != NULL) {
    		current=head;
    		prev=current;
	        next = current->address;
	        flag=0;
	        while (next->address != NULL) {
	            if (current->data == next->address->data) {
	                dup = next->address;
	                next->address = next->address->address;
	                delete (dup);
	                flag=1;
	            } 
	            else 
	                next = next->address;
	        }
	        if(flag==1){
	        	temp = current;
	        	prev->address = current->address;
	        	delete(temp);
			}
	       current = current->address;
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
cout<<"\n1.Insert in begining\n2.Insert at last\n3.Remove Duplicate\n4.Reverse List\n8.display\n9.Exit\n";  
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
            case 3:
            	l.removeDuplicates();
            	break;
            case 4:
            	l.reverse_list();
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

