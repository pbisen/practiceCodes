#include<iostream>

#define N 100

using namespace std;

class stack{

    public:
    int top;
    int array[N];

    stack(){
        top = -1;
        array[N] = {0};
    }

    void push(int val){
        if(top == N){
            cout<<"Full"<<endl;
            return;
        }
        top++;
        array[top] = val;
    }

    int pop(){
        if(top == -1){
            cout<<"Empty Stack"<<endl;
            return -1;
        }

        int temp = array[top];
        top--;
        return temp;
    }

    bool empty(){
        return top == -1;
    }

    int Top(){
        if(top == -1){
            cout<<"Empth List"<<endl;
        }
        return array[top];
    }


};


int main(){
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    cout<<"Popped: "<<st.pop()<<endl;
    cout<<st.Top()<<endl;
    cout<<"Popped: "<<st.pop()<<endl;
    cout<<"Popped: "<<st.pop()<<endl;
    cout<<"Popped: "<<st.pop()<<endl;
    cout<<"Is Empty: "<<st.empty()<<endl;

}