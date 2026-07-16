// // 

// // 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<vector<int>> mat={ { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
//     vector<int> res;

//     //top to right
//     int top=0; 
//     int right=mat.size()-1;
//     //right to bottom
//     int bottom =mat.size()-1;
//     //bottom to left
//     int left=0;

//     while(top<=bottom && left<=right){
//         //left to right
//         for(int i=left;i<=right;i++){
//             res.push_back(mat[top][i]);
//         }
//         top++;

//         //top-right to bottom
//         for(int i=top;i<=bottom;i++){
//             res.push_back(mat[i][right]);
//         }
//         right--;

//         //bottom-right to left
//         if(top<=bottom){
//         for(int i=right;i>=left;i--){
//             res.push_back(mat[bottom][i]);
//         }
//         bottom--;
//         }

//         //bottom-left to top

//         if(left<=right){
//             for(int i=right;i<=top;i++){
//                 res.push_back(mat[i][top]);
//             }
//         }
//         left++;

//     }


//     for(int x:res){
//         cout<<x<<',';
//     }
//     cout<<'\n';

// }





// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n=4;
//     vector<int>arr={1,2,3,4,5,-6,6,12,-6};
//     int k = 6; int sum=0; int count=0;
    
//     for(int i=0;i<arr.size();i++){
//         sum=0;
//         for(int j=i;j<arr.size();j++){
//             sum+=arr[j];
//             if(sum==k){
//             count++;
//             break;
//             }
//         }
//     }
//     cout<<count<<'\n';
// }

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={3, 1, 2, 4};
    map<int,int> cnt={{0,1}};
    int k=6; int sum=0; int count=0;


    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(cnt.contains(sum-k)){ 
            count++;
        }
        cnt[sum]++;
    }

    cout<<count<<'\n';

}