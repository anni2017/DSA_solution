// WAP to search a key in 2D matrix 

#include<iostream>
using namespace std;
bool search(int mat[][4],int n, int m, int key){

    int i = 0, j = m-1;
    while(i < n && j >= 0){

        if(mat[i][j] == key){
            cout << "key found at idx (" << i << "," << j << ")" << endl;
            return true;
        }else if(mat[i][j] > key){
            j--;
        }
        else {
            i++;
        }
    }
    
    cout << "key not found" << endl;
    return false;
    
    }

int main(){

    int mat[5][4] ={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16},
                 {17,18,19,20}};

    search(mat,5,4,24);
    return 0;
}