// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <cstring>
#define MAXSIZE 5

using namespace std;
class stack{
    int front = 0;
    int rear = -1;
    int queue[MAXSIZE];
    
    public:
      bool isFull(){
          return(rear>=MAXSIZE-1);
      }
      bool isEmpty(){
          return(front>rear);
      }
      
      void enqueue(int data){
          if(isFull()){
              cout<<"Queue is full"<<endl;
          }
          else{
              rear++;
              queue[rear]=data;
              cout<<"Data enqueued is: "<<data<<endl;
          }
      }
      
      void dequeue(){
          if(isEmpty()){
              cout<<"Queue is empty"<<endl;
          }
          else{
              int deqItem = queue[front];
              front++;
              cout<<"Dequeued item is: "<<deqItem<<endl;
          }
      }
      void display(){
          if(isEmpty()){
              cout<<"Queue is empty"<<endl;
          }
          else{
              for(int i = front ; i<rear;i++){
                  cout<<queue[i]<<endl;
              }
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
    s.enqueue(10);
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.dequeue();
    s.display();

    return 0;
}
