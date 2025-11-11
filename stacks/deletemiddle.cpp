#include <bits/stdc++.h> 

void Delete(stack<int>&inputStack,int count ,int size){
if(count==size/2){
   inputStack.pop();
   return;
}
int x = inputStack.top();
inputStack.pop();

Delete(inputStack,count+1,size);

inputStack.push(x);

};

void deleteMiddle(stack<int>&inputStack, int N){
	int count =0;
   Delete(inputStack,count,N);
}


// Insert An Element At Its Bottom In A Given Stack
void Insert(stack<int>&inputStack,int count ,int size,int x){
if(count==size){
   inputStack.push(x);
   return;
}
int y = inputStack.top();
inputStack.pop();

Insert(inputStack,count+1,size,x);

inputStack.push(y);

};

stack<int> pushAtBottom(stack<int>& myStack, int x) {
   int count =0;
   int N = myStack.size();
   Insert(myStack,count,N,x);
   return myStack;
}

