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

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> nums={1, 2, 1, 1, 3, 2};
//     int n=nums.size();
//     //since there can be two elements more than n/3 in an array unlike n/2 where only 1 element can be more thn n/2.

//     int cnt1=0; int el1; int cnt2=0; int el2;
    
//         /*Find the potential candidates using
//         Boyer Moore's Voting Algorithm*/
//         for (int i = 0; i < n; i++) {
            
//             if (cnt1 == 0 && el2 != nums[i]) {
//                 cnt1++;
//                 // Initialize el1 as nums[i]
//                 el1 = nums[i]; 
//             }
//             else if (cnt2 == 0 && el1 != nums[i]) {
//                 cnt2++;
//                 // Initialize el2 as nums[i]
//                 el2 = nums[i]; 
//             } 
//             else if (nums[i] == el1) {
//                 // Increment count for el1
//                 cnt1++;
//             } 
//             else if (nums[i] == el2) {
//                 // Increment count for el2
//                 cnt2++; 
//             } 
//             else {
//                 // Decrement count for el1
//                 cnt1--; 
//                  // Decrement count for el2
//                 cnt2--;
//             }
//         }

// }




//3 SUM 

// #include <iostream>
// #include <vector>
// #include <map>
// #include <set>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> arr={-1,0,1,2,-1,-4};  // -4 -1 -1 2 1 2 
//     set<vector<int>> res;   
//     int num1; int num2; int num3;

//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             for(int k=j+1;k<arr.size();k++){
//                 if(i!=j&&j!=k&&k!=i){
//                     if(arr[i]+arr[j]+arr[k]==0){
//                         vector<int> temp={arr[i],arr[j],arr[k]};
//                         sort(temp.begin(),temp.end());                 
//                         res.insert(temp);
//                     }
//                 }
//             }
//         }

//     }
//            // Convert set to vector
//         vector<vector<int>> ans(res.begin(), res.end());
    
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<',';
//         }
//         cout<<'\n';
//     }

// }


// #include <iostream>
// #include <algorithm>
// #include <set>
// #include <map>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={0,0,0};
//     set<vector<int>> res;

//     for(int i=0;i<arr.size();i++){
//         set<int> count;
//         for(int j=i+1;j<arr.size();j++){
//             int value=-(arr[i]+arr[j]);
//             if(count.find(value)!=count.end()){
//                 vector<int> temp={arr[i],arr[j],value};
//                 sort(temp.begin(),temp.end());                 
//                 res.insert(temp);                
//             }
//             else{
//                 count.insert(arr[j]);
//             }
//         }
//     }
//     // Convert set to vector
//     vector<vector<int>> ans(res.begin(), res.end());
    
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){ 
//             cout<<ans[i][j]<<',';
//         }
//         cout<<'\n';
//     }
// }


//4SUM

// #include <iostream>
// #include <map>
// #include <set>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int main(){
//     vector<int> arr={1,0,-1,0,-2,2};
//     set<vector<int>> res;
//     int target=0;


//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             for(int k=j+1;k<arr.size();k++){
//                 for(int l=k+1;l<arr.size();l++){
//                     int sum=arr[i]+arr[j]+arr[k]+arr[l];
//                     if(sum==target){
//                         vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
//                         sort(temp.begin(),temp.end());
//                         res.insert(temp);
//                     }
//                 }
//             }
//         }
//     }

//     //convert set to vector
//     vector<vector<int>> ans(res.begin(),res.end());

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<',';
//         }
//         cout<<'\n';
//     }
// }


// #include <iostream>
// #include <vector>
// #include <map>
// #include <set>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> arr={1,0,-1,0,-2,2};
//     set<vector<int>> res;
//     int target=0;


//     for(int i=0;i<arr.size();i++){
//                     set<int> count;
//         for(int j=i+1;j<arr.size();j++){
//             for(int k=j+1;k<arr.size();k++){
//                 int val=target-(arr[i]+arr[j]+arr[k]);
//                 if(count.find(val)!=count.end()){
//                     vector<int> temp={arr[i],arr[j],arr[k],val};
//                     sort(temp.begin(),temp.end());
//                     res.insert(temp);
//                 }
//                 else{
//                     count.insert(arr[k]);
//                 }
//             }
//         }
//     }
//     //convert set to vector
//     vector<vector<int>> ans(res.begin(),res.end());

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<',';
//         }
//         cout<<'\n';
//     }
// }


//3 SUM POINTER

// #include <iostream>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={-1,0,1,2,-1,-4};
//     set<vector<int>> res;

//     sort(arr.begin(),arr.end());

//     for(int i=0;i<arr.size();i++){
//         int left=i+1;
//         int right=arr.size()-1;
//         while(left<right){
//             int sum=arr[i]+arr[left]+arr[right];
//             if(sum>0){
//                 right--;
//             }
//             if(sum<0){
//                 left++;
//             }
//             if(sum==0){
//                 vector<int> temp={arr[i],arr[left],arr[right]};
//                 sort(temp.begin(),temp.end());
//                 left++;
//                 right--;
//                 res.insert(temp);
//             }
//         }
//     }

//     //convert set to vector

//     vector<vector<int>> ans(res.begin(),res.end());

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<',';
//         }
//         cout<<'\n';
//     }
// }


//4SUM POINTER

// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// #include <map>
// using namespace std;

// int main(){
//     vector<int> arr={-1,0,1,2,-1,-4,4,5,7,-7,3,-5};

//     //first sort to use two pointers
//     sort(arr.begin(),arr.end());

//     set<vector<int>> res;

//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             int left=j+1;
//             int right=arr.size()-1;
//             while(left<right){
//                 int sum=arr[i]+arr[j]+arr[left]+arr[right];
//                 if(sum>0){
//                     right--;
//                 }
//                 if(sum<0){
//                     left++;
//                 }
//                 if(sum==0){
//                     vector<int> temp={arr[i],arr[j],arr[left],arr[right]};
//                     sort(temp.begin(),temp.end());
//                     res.insert(temp);
//                     left++;
//                     right--;
//                 }
//             }
//         }
//     }

//     //comvert set back to vector
//     vector<vector<int>> ans(res.begin(),res.end());

//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<',';
//         }
//         cout<<'\n';
//     }

// }


//Length of the longest subarray with zero Sum


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int main(){
//     vector<int> arr={9, -3, 3, -1, 6, -5};
//     int sum=0; int count=0; 

//     for(int i=0;i<arr.size();i++){ 
//         sum=0; 
//         sum+=arr[i];
//         for(int j=i+1;j<arr.size();j++){
//             sum+=arr[j];
//             if(sum==0){
//                 count=max(j-i+1,count);    
//             }
//         }
//     }

//     cout<<count;
// }


//OPTIMAL APPROACH 

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;


int main(){
    vector<int> arr={9, -3, 3, -1, 6};

    //initialize a map
    map<int,int> cnt;
    int sum=0; int count=0;

    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0){
            count=i+1;
        }
        if(cnt.find(sum)!=cnt.end()){
            count=i-cnt[sum];
        }
        else{
            cnt.insert({sum,i});             //sum with current index
        }
    }

    cout<<count;
}