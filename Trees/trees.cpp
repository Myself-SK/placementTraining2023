#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		Node *left;
		Node *right;
		
		Node(){
			left=NULL;
			right=NULL;
			
		}
};
class Tree{
	public:

	Node *root = NULL;
	Node *newNode(int item) {
	Node* temp = new Node();
  	temp->key = item;
  	temp->left = temp->right = NULL;
  	return temp;
	}

	Node* insert(Node* node, int key) {
		if (node == NULL) return newNode(key);
		if (key < node->key)
			node->left = insert(node->left, key);
	  	else
			node->right = insert(node->right, key);

  		return node;
	}
	
	void inorder(Node *temp){
		if (temp != NULL) {
	    	inorder(temp->left);
		    cout<< temp->key <<"->";
	    	inorder(temp->right);
		}
	}
	
	void postorder(Node *temp) {
 		if (temp != NULL) {
    		postorder(temp->left);
    		postorder(temp->right);
    		cout<< temp->key <<"->";
 		}
 	}
 	
 	void preorder(Node *temp) {
 		if (temp != NULL) {
 			cout<< temp->key <<"->";
    		postorder(temp->left);
    		postorder(temp->right);
 		}
 	}
 	Node* minValueNode(Node *node) {
		Node *current = node;
		while (current && current->right != NULL)
    		current = current->right;
  		return current;
	}
	Node *deleteNode(Node *root, int key) {
		if (root == NULL) return root;
		if (key < root->key)
    		root->left = deleteNode(root->left, key);
  		else if (key > root->key)
    		root->right = deleteNode(root->right, key);

  		else {
		    if (root->left == NULL) {
		      Node *temp = root->right;
		      delete(root);
		      return temp;
		    } else if (root->right == NULL) {
		      Node *temp = root->left;
		      delete(root);
		      return temp;
		    }
		    Node *temp = minValueNode(root->right);
			root->key = temp->key;
			root->right = deleteNode(root->right, temp->key);
		  }
  		return root;
	}
};
int main() {
  Node *root = NULL;
  Tree tree;
  root = tree.insert(root, 17);
  root = tree.insert(root, 3);
  root = tree.insert(root, 10);
  root = tree.insert(root, 6);
  root = tree.insert(root, 7);
  root = tree.insert(root, 13);
  root = tree.insert(root, 14);
  root = tree.insert(root, 4);

  cout<<"\nInorder traversal:"<<endl;
  tree.inorder(root);
  cout<<"\npreorder traversal: "<<endl;
  tree.preorder(root);
  cout<<"\npostorder traversal: "<<endl;
  tree.postorder(root);
  cout<<"\nAfter deleting 10"<<endl;
  root = tree.deleteNode(root, 10);
  cout<<"\nInorder traversal: "<<endl;
  tree.inorder(root);
  cout<<"\npreorder traversal: "<<endl;
  tree.preorder(root);
  cout<<"\npostorder traversal: "<<endl;
  tree.postorder(root);
  return 0;
}

