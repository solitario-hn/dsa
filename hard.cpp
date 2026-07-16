//PASCAL TRAINGLE

// #include <iostream>
// #include <vector>
// using namespace std;


// int main(){
//     int n=6;
//     vector<vector<int>> res;

//     for(int i=0;i<n;i++){
//             vector<int> arr(i+1,1);  //1 //1 1 //1 2 1 // 1 3 3 1 // 1 4 6 4 1
//         for(int j=1;j<i;j++){
//                 arr[j]=res[i-1][j-1]+res[i-1][j];           
//         }
//         res.push_back(arr);
//     }
//     for(int i=0;i<res.size();i++){
//         for(int j=0;j<res[i].size();j++){
//             cout<<res[i][j]<<',';
//         }
//         cout<<'\n';
//     }
// }


//MAJORITY N/3 MORE


// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int main(){
//     vector<int> arr={1, 2, 1, 1, 3, 2};
//     map<int,int> count;

//     for(int i=0;i<arr.size();i++){
//         count[arr[i]]++;
//     }

//     for(auto x:count){
//         if(x.second>(n/3)){
//             cout<<"Majority element than n/3 is: "<<x.first <<" occurence: "<<x.second<<'\n';
//         }
//     }
// }

//MAJORITY ELEMENT OPTIMAL APPROACH 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums={1, 2, 1, 1, 3, 2};
    int n=nums.size();
    //since there can be two elements more than n/3 in an array unlike n/2 where only 1 element can be more thn n/2.

    int cnt1=0; int el1; int cnt2=0; int el2;
    
        /*Find the potential candidates using
        Boyer Moore's Voting Algorithm*/
        for (int i = 0; i < n; i++) {
            
            if (cnt1 == 0 && el2 != nums[i]) {
                cnt1++;
                // Initialize el1 as nums[i]
                el1 = nums[i]; 
            }
            else if (cnt2 == 0 && el1 != nums[i]) {
                cnt2++;
                // Initialize el2 as nums[i]
                el2 = nums[i]; 
            } 
            else if (nums[i] == el1) {
                // Increment count for el1
                cnt1++;
            } 
            else if (nums[i] == el2) {
                // Increment count for el2
                cnt2++; 
            } 
            else {
                // Decrement count for el1
                cnt1--; 
                 // Decrement count for el2
                cnt2--;
            }
        }

}