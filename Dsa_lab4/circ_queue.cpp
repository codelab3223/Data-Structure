// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <cstring>
#define MAXSIZE 5

using namespace std;
class stack{
    int front = -1;
    int rear = -1;
    int queue[MAXSIZE];
    
    public:
      bool isFull(){
          return((rear+1)%MAXSIZE==front);
      }
      bool isEmpty(){
          return(front==-1);
      }
      
      void enqueue(int data){
          if(isFull()){
              cout<<"Queue is full"<<endl;
          }
          else{
              if(isEmpty()){
                 front = rear = 0;
              }
           
              else{
                  rear = (rear +1)%MAXSIZE;
                  
              }
             cout<<"Data enqueued is: "<<data<<endl;
            queue[rear]= data;
          }
      }
      
      void dequeue(){
          if(isEmpty()){
              cout<<"Queue is empty"<<endl;
          }
          else{
              int deqItem = queue[front];
              cout<<"Dequeued item is: "<<deqItem<<endl;
              if(front == rear){
                  front = rear = -1;
              }
              else{
                  front = (front + 1)% MAXSIZE;
              }
          }
      }
      void display(){
          if(isEmpty()){
              cout<<"Queue is empty"<<endl;
          }
          
          else{
              cout<<"Items in queue are:"<<endl;
            //   for(int i = front ; i<=((rear+1)%MAXSIZE);i++){
            //       cout<<queue[i]<<endl;
            //   }
           int i = front;
           do{
                cout<<queue[i]<<endl;
                i++;
           } while(i == ((rear)%MAXSIZE));
          
          }
     
      }
      
};
int main() {
    // Write C++ code here
    stack s;
    s.enqueue(6);
    s.enqueue(7);
    s.enqueue(8);
    s.enqueue(9);
    s.enqueue(10);
    s.dequeue();
    s.dequeue();
    s.dequeue();

    s.display();

    return 0;
}
