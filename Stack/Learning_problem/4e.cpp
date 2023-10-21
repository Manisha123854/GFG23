

https://practice.geeksforgeeks.org/problems/queue-using-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=queue-using-stack

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        
        input.push(x);
        
    }

    int dequeue() {
        
       if(!output.empty()) {
           int x=output.top();
           output.pop();
           return x;
       }
       else{
           
           while(!input.empty()){
               output.push(input.top());
               input.pop();
           }
           int x=output.top();
           output.pop();
           return x;
       }
       
        
    }
};