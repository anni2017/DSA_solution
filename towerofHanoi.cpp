#include<iostream>
using namespace std;


void towerOfHanoi(int n,string source,string helper,string dest){

    if(n == 1){
        cout << "Move disk " << n << " from "<< source << " -> " << dest <<endl;
        return;
    }
    towerOfHanoi(n-1,source,dest,helper);
    cout<<"Move disk "<<n<<" from "<<source<<" -> "<<dest<<endl;
    towerOfHanoi(n-1,helper,source,dest);
}
int main(){

    int n = 3;
    towerOfHanoi(n,"S","H","D");
    return 0;
}