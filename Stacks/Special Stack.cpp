// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
	if(s.empty())
	    s.push(a);
	else{
	    if(s.top() > a){
	        s.push(a);
	    }
	    else{
	        s.push(s.top());
	    }
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size() == n)
	    return true;
	else
	    return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
    if(!s.empty())
	    return false;
	else
	    return true;
}

int pop(stack<int>& s){
	// Your code goes here
		if(!s.empty()){
	        int ele = s.top();
	        s.pop();
	        return ele;
	    }
	return -1;
}

int getMin(stack<int>& s){
	// Your code goes here
	 if(s.empty()){
        return -1;
    }
    else{
        return pop(s);
    }
	
}
