 void rearrangeEvenOdd(Node *head){  
        Node *even = head->next;
        Node *odd = head;
        Node *evenhead = even;
        while (1) {
            if (even == NULL || even->next == NULL) {
                odd->next = evenhead;
                break;
            }
            odd->next = even->next;
            odd = odd->next;
            if (odd->next == NULL) {
                even->next = NULL;
                odd->next = evenhead;
                break;
            }
            even->next = odd->next;
            even = even->next;
        }
    }
