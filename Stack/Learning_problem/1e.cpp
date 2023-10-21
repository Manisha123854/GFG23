

https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-stack-using-array


//Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

 stack<int>st;

void MyStack :: push(int x)
{
  
  
    arr[++top]=x;
   
   
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
     

     
     if(top!=-1)
    return  arr[top--];
            
    return -1;
   
}
