void rearrangeEvenOdd(Node *head){
        int flag = 1;
        Node* start = head;
        
        vector<int> even, odd;
        while(start != NULL){
            if(flag)
                odd.push_back(start->data);
            else
                even.push_back(start->data);
            flag = !flag;
            start = start->next;
        }
        vector<int> ans;
        for(int i=0; i<odd.size(); ++i){
            ans.push_back(odd[i]);
        }
        for(int i=0; i<even.size(); ++i){
            ans.push_back(even[i]);
        }
        head->next = NULL;
        Node* curr = NULL;
        for(auto ele : ans){
            Node* ptr = new Node(ele);
            curr->next = ptr;
            curr = ptr;
        }
        head->next = curr->next;
        return;
    }
