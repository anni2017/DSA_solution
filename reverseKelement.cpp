

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKele(queue<int> q,int k){

    queue<int> ans;
    stack<int> s;
   
    
        int i = 0;
        while(i < k && !q.empty()){
            s.push(q.front());
            q.pop();
            i++;
        }
        
    

    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }

    while(!ans.empty()){
        cout << ans.front() << " ";
        ans.pop();
    }

}
int main(){

    queue<int> q;
    for(int i = 1;i<=5;i++){
        q.push(i);
    }

    reverseKele(q,3);
    return 0;
}