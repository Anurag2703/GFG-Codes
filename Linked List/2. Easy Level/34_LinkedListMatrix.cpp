/*structure of the node of the linked list is as

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n){
    vector<vector<Node *>>v(n, vector<Node *>(n, nullptr));
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            v[i][j] = new Node(mat[i][j]);
            
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j){
            if(i < n-1)
                v[i][j]->down = v[i+1][j];
            
            if(j < n-1)
                v[i][j]->right = v[i][j+1];
        }
        
    return v[0][0];
}