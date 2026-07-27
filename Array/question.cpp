// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n=4;
//     int arr[n]={4, 7, 1, 0};  
//     int lead=1;
//     vector<int> leader;

//     for(int i=0;i<n;i++){
//         lead=1;
//         for(int j=i+1;j<n;j++){
//             if(!(arr[i]>arr[j])){
//                 lead=0;
//                 break;
//             }
//         }
//         if(lead){
//             leader.push_back(arr[i]);
//         }
//     }
//     for(int x:leader){
//         cout<<x;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n=4;
//     int arr[n]={4,7,1,0};
//     vector<int> leader;
//     int max=arr[n-1];
//     leader.push_back(arr[n-1]);

//     for(int i=n-2;i>=0;i--){
//         if(max<arr[i]){
//             max=arr[i];
//             leader.push_back(arr[i]);
//         }
//     }

//     for(int x:leader){
//         cout<<x<<',';
//     }
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> arr={0,1 ,1 ,0 ,2, 3 ,4 ,5 ,101 ,102 ,103 ,104 ,105 ,106 ,107, 108 };  
//     vector<int> res;
//     //using sort to sort the array first
//     sort(arr.begin(),arr.end());

//     int longest=1; int count=1;
//     int value=arr[0];

//     for(int i=1; i<(arr.size());i++){
//         if(arr[i]==value){
//             continue;
//         }
//         if(arr[i]==(value+1)){
//             count++;
//         }
//         else{
//             longest=max(longest,count);
//             count=1;
//         }
//         value=arr[i];
//     }
//     longest=max(longest,count);

//     cout<<longest<<'\n';   
// }


// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;


// int main(){
//     vector<int> arr={0,1 ,1 ,0 ,2, 3 ,4 ,5 ,101 ,102 ,103 ,104 ,105 ,106 ,107, 108};
//     int count=1; int longest=1;
//     int smaller=INT_MIN;

//     for(int i=0;i<arr.size();i++){
//         if(arr[i]-1==smaller){
//             count++;
//             smaller=arr[i];
//         }
//         if(arr[i]!=smaller){
//             count=1;
//             smaller=arr[i];
//         }
//         longest=max(longest,count);;
//     }
//     cout<<longest;
// }


// 


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int m=3;int n=3;
//     vector<vector<int>> mat={{1,0,0},{0,0,0},{0,0,0}};
//     vector<int> row(m, 0);
//     vector<int> col(n, 0);

//     // row = { 0 , 1 , 1}
//     // col = { 0 , 1 , 1}


//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j] == 0 ) {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
            
//         }
//     }

//       for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//          if(row[i] == 1 || col[j] ==1) {
//             mat[i][j] = 0;
//          }
            
//         }
//     }
// }

#include <vector>
#include <iostream>
using namespace std;

int main(){
    int m=3;int n=3;
    vector<vector<int>> mat={{1,0,1},{1,1,1},{0,1,1}};

  bool firstROW=false; bool firstCOL=false;

  //check row
  for(int i=0;i<m;i++){
    if(mat[0][i]==0){
        firstROW=true;
    }
  }

  //check zeroth col
  for(int i=0;i<n;i++){
    if(mat[i][0]==0){
        firstCOL=true;
    }
  }

  //search for zero for remaining matrix and set 0 in first col and row at same position
  for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        if(mat[i][j]==0){
            mat[i][0]=0;
            mat[0][j]=0;
        }
    }   
  }

  //check for zero in firstrow and first col and make that respective element in rmaining matrix 0
  for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        if(mat[i][0]==0||mat[0][j] ==0)
        mat[i][j]=0;      
    }   
  }

  //now make firstrow zero
  if(firstROW){
    for(int i=0;i<m;i++){
        mat[0][i]=0;
    }
  }

  //now make first col zero
    if(firstCOL){
    for(int i=0;i<m;i++){
        mat[i][0]=0;
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<',';
    }
    cout<<'\n';
  }
}
// very good singed by rohit