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

// #include <iostream>
// #include <algorithm>
// #include <map>
// #include <vector>
// using namespace std;


// int main(){
//     vector<int> arr={9, -3, 3, -1, 6};

//     //initialize a map
//     map<int,int> cnt;
//     int sum=0; int count=0;

//     for(int i=0;i<arr.size();i++){
//         sum+=arr[i];
//         if(sum==0){
//             count=i+1;
//         }
//         if(cnt.find(sum)!=cnt.end()){
//             count=i-cnt[sum];
//         }
//         else{
//             cnt.insert({sum,i});             //sum with current index
//         }
//     }

//     cout<<count;
// }


// Given an array of integers A and an integer B. Find the total number of subarrays having bitwise XOR of all elements equal to k.

// #include <map>
// #include <iostream>
// #include <set>
// #include <vector>
// using  namespace std;

// int main(){
//     vector<int> arr={4, 2, 2, 6, 4};
//     int sum=0; int k=6; int count=0;

//     for(int i=0;i<arr.size();i++){
//         sum=0;
//         for(int j=i;j<arr.size();j++){
//             sum^=arr[j];
//             if(sum==k){
//                 count++;
//             }
//         }
//     }

//     cout<<count;
// }

//OPTIMAL APPROACH

// #include <map>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main(){
//     vector<int> arr={4, 2, 2, 6, 4};
//     int sum=0; int count=0; int k=6;

//     //intialize map same as prefix arr
//     map<int,int> cnt={{0,1}};

//     for(int i=0;i<arr.size();i++){
//         sum^=arr[i];
//         if(cnt.find(k^sum)!=cnt.end()){
//             count+=cnt[k^sum];            //////////////why k^sum bro?????
//         }
//         cnt[sum]++;
//     }
//     cout<<count;
// }



//Merge Overlapping Sub-intervals

//  Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals and return an array of the non-overlapping intervals that cover all the intervals in the input


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){

// vector<vector<int>> arr={{1,3},{2,6},{5,10},{15,18}}; 

// vector<vector<int>> res;  

// //first sort the array

// sort(arr.begin(),arr.end());

// for(int i=0;i<arr.size(); ){
//     int starti=arr[i][0];
//     int endi=arr[i][arr[i].size()-1];
//     int j=i+1;

//     while(j<arr.size()&&arr[j][0]<=endi){
//             endi=max(endi,arr[j][1]);   
//             j++;  //
        
//     }
//     res.push_back({starti,endi});
//     i=j;
// }

// for(int  i=0;i<res.size();i++){
//     for(int j=0;j<res[i].size();j++){
//         cout<<res[i][j]<<',';
//     }
//     cout<<'\n';
// }


// }


//MERGE OVERLAPPING OPTIMAL

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(){
//     vector<vector<int>> arr={{1,4},{4,5}};

//     vector<vector<int>> res;

//     sort(arr.begin(),arr.end());

//     for(int i=0;i<arr.size();i++){
//         int starti=arr[i][0];
//         int endi=arr[i][1];

//         if(res.empty()||res.back()[1]<starti){   //comparing the last value pushe
//             res.push_back({starti,endi});  
//         }
//         else{
//             endi=max(res.back()[1],endi);
//             res.back()[1]=endi;
//         }
  
//     }

//     for(int i=0;i<res.size();i++){
//         for(int j=0;j<res[i].size();j++){
//             cout<<res[i][j]<<',';
//         }
//         cout<<'\n';
//     }

// }

//Merge two Sorted Arrays Without Extra Space

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     vector<int> arr1={-5, -2, 4, 5, 0, 0, 0};
//     vector<int> arr2={-3, 1, 8};

//     int i=0; int j=0;

//     while(i<arr1.size()&&j<arr2.size()){
//         if(arr1[i]==0){
//             arr1[i]=arr2[j];
//             j++;
//         }
//         i++;
//     }

//     sort(arr1.begin(),arr1.end());

//     for(int i=0;i<arr1.size();i++){
//         cout<<arr1[i]<<',';
//     }

//     cout<<'\n';

// }


// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;

// int main(){
//     vector<int> arr1={-5, -2, 4, 5, 0, 0, 0};
//     vector<int> arr2={-6, 1, 8};

//     int n=arr2.size();
//     int m=arr1.size()-n;
//     int k=m+n-1;

//     int i=m-1; int j=n-1;

//     while(i>=0 && j>=0){

//         if(arr1[i]>arr2[j]){
//             arr1[k--]=arr1[i--];  //post decrement operator
//         }
//         else{
//             arr1[k--]=arr2[j--];
//         }
//     }

//     while (j >= 0) {
//             arr1[k--] = arr2[j--];
//         }

//     for(int i=0;i<m+n;i++){
//         cout<<arr1[i]<<',';
//     }
//     cout<<endl;

// }


//Find the repeating and missing numbers


// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={3, 5, 4, 1, 1};
//     int n=arr.size();

//     map<int,int>cnt;

//     for(int i=0;i<arr.size();i++){
//         cnt[arr[i]]++;
//     }

//     int sum=0; int count=0;

//     for(auto x:cnt){
//         if(x.second>1){
//             cout<<"Repeating number : "<<x.first<<'\n';
//         }
//         sum+=x.first;   
//     }

//     int missing=(n*(n+1)/2)-sum;

//     cout<<"Missing number:"<<missing<<endl;
// }

// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int main(){
//     vector<int> arr={3, 5, 4, 1, 1};
//     int repeating=-1; int missing=-1;

//     for(int i=0;i<arr.size();i++){

//         int count=0;

//         for(int j=0;j<arr.size();j++){
//             if(arr[j]==i){
//                 count++;
//             }
//         }

//         if(count==2){
//             repeating=i;
//         }
//         if(count==0){
//             missing=i;
//         }
//     }

//     cout<<"MISSING NUMBER : "<<missing<< " REPEATING NUMBER : "<<repeating<<endl;
// }


//BETTER APPROACH BAD WAALA MINE IS BETTER THAN THIS 
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int main(){
    vector<int> arr={3, 5, 4, 1, 1};

    vector<int> occurences(arr.size()+1,0);

    for(int i=0;i<arr.size();i++){
        occurences[arr[i]]++;
    }

    int repeating=-1; int missing=-1;

    for(int j=1;j<=arr.size();j++){
        if(occurences[j]>1){
            repeating=j;
        }
        if(occurences[j]==0){
            missing=j;
        }
    }

    cout<<"MISSING NUMBER: "<<missing<<"\tREPEATING NUMBER : "<<repeating<<endl;


}