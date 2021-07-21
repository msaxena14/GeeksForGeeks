vector<int> inOrder(Node* root){
        vector<int> ans;
        Node* curr = root;
        stack<Node*> st;
        while(curr or !st.empty()){
            while(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            ans.push_back(curr->data);
            curr = curr->right;
        }
        return ans;
    }
