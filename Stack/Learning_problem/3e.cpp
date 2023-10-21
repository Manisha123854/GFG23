

https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=stack-using-two-queues

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code
        
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code   
        if(q1.empty())
        return -1;
        int x= q1.front();
        q1.pop();
        return x;
}
