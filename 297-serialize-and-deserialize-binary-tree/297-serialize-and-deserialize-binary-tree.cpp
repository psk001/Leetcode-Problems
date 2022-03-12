/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(not root)
            return "";
        
        string res="";
        queue<TreeNode*> q;
        q.push(root);
        
        while( !q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            
            if(temp)
                res.append(to_string(temp->val)+",");
            else
                res.append("#,");
            
            if(temp){
                q.push(temp->left);
                q.push(temp->right);
            }   
        }
        
        // cout << "res: " << res << endl;
        return res;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)
            return nullptr;
        
        stringstream s(data);        
        string str;
        
        getline(s, str, ',');
        
        TreeNode* root = new TreeNode(stoi(str));
        
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            
            getline(s, str, ',');
            if(str=="#")
                temp->left=nullptr;
            else{
                TreeNode* left=new TreeNode(stoi(str));
                temp->left=left;
                q.push(left);
            }
            
            getline(s, str, ',');
            if(str=="#")
                temp->right=nullptr;
            else{
                TreeNode* right = new TreeNode(stoi(str));
                temp->right=right;
                q.push(right);
            }
            
        }
    
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));