void getLeftView(Node* root,map<int,int> &levelMap,int level){
    if(root==NULL){
        return;
    }
    if(levelMap[level]==NULL){
        levelMap[level] = root->data;
    }
    getLeftView(root->left,levelMap,level+1);
    getLeftView(root->right,levelMap,level+1);
}
vector<int> leftView(Node *root)
{
    
vector<int> result;
if(root==NULL){
        return result;
    }
map<int,int> levelMap;
getLeftView(root,levelMap,0);
for(int i=0;i<levelMap.size();i++){
    result.push_back(levelMap[i]);
}
return result;
 

   
}
