class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    
    vector<int> topView(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>> q;
        vector<int> result;
        q.push({root,0});
        map<int,int> mpp;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            Node* frontNode = it.first;
            int line = it.second;
            if(mpp.find(line)==mpp.end()) mpp[line]=frontNode->data;
            if(frontNode->left){
                q.push({frontNode->left,line-1});
            }
            if(frontNode->right){
                q.push({frontNode->right,line+1});
            }
            
        }
        for(auto it:mpp){
            result.push_back(it.second);
        }
        return result;
    
    }

};
