#include<iostream>
#include<stack>
using namespace std;

void reverseStack(stack<int> &st){
    if(st.empty()){
        return ;
    }
    
    int top = st.top();
    stack<int> temp;

    st.pop();
    reverseStack(st);

    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    st.push(top);

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    return ;

}


int main(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


}