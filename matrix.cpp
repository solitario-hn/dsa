// 

// 




#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> mat={ { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
    vector<int> res;

    //top to right
    int top=0; 
    int right=mat.size()-1;
    //right to bottom
    int bottom =mat.size()-1;
    //bottom to left
    int left=0;

    while(top<=bottom && left<=right){
        //left to right
        for(int i=left;i<=right;i++){
            res.push_back(mat[top][i]);
        }
        top++;

        //top-right to bottom
        for(int i=top;i<=bottom;i++){
            res.push_back(mat[i][right]);
        }
        right--;

        //bottom-right to left
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            res.push_back(mat[bottom][i]);
        }
        bottom--;
        }

        //bottom-left to top

        if(left<=right){
            for(int i=right;i<=top;i++){
                res.push_back(mat[i][top]);
            }
        }
        left++;

    }


    for(int x:res){
        cout<<x<<',';
    }
    cout<<'\n';

}