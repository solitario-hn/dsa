//SEARCH IN SORTED ARRAY (BINARY SEARCH normal)

// #include <iostream>
// #include <vector>
// using namespace std;


// int main(){
//     vector<int> arr={1,2,3,6,7,89};
//     int left=0;
//     int right=arr.size()-1;
//     int target=6;

//     while(left<=right){
//         int mid=(left+right)/2;
//         if(arr[mid]==target){
//             cout<<"FOUND";
//             break;
//         }
//         if(arr[mid]>target){
//             right=mid-1;
//         }
//         if(arr[mid]<target){
//             left=mid+1;
//         }
//     }

// }

//SEARCH SORTED ARRAY (BINARY SEARCH RECURSION )


// #include <iostream>
// #include <vector>
// using namespace std;


// int search(vector<int> &arr,int left, int right, int target){
//     if(left>right){
//         return 0;
//     }
//     int mid=(left+right)/2;  
//     if(arr[mid]==target){
//         return 1;
//     }
//     if(arr[mid]<target){
//         return search(arr,mid+1,right,target);   //left=mid+1;
//     }
//     else{                                         //if(arr[mid]>target)
//         return search(arr,left,mid-1,target);    //right=mid-1;
//     }
// }

// int main(){
//     vector<int>arr={1,3,4,7,8,9,13};
//     int left=0;
//     int right=arr.size()-1;
//     int target=0;
//     search(arr,left,right,target)?cout<<"Element found":cout<<"Element not found";

// }


//Implement Lower Bound
//Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={3,5,10,15,19};

//     int target=9;
//     int left=0;
//     int right=arr.size()-1;

//     int smallest=-1;

//     while(left<=right){
//         int mid=(left+right)/2;                         //normalisation to avoid overflow in 62-32bit 
//         if(arr[mid]>=target){
//             smallest=mid;
//             right=mid-1;
//         }
//         if(arr[mid]<=target){
//             left=mid+1;
//         }
//     }

//     cout<<smallest<<endl;
// }

//IMPLEMENT LOWER BOUND RECURSION METHOD

// #include <iostream>
// #include <vector>
// using namespace std;


// int lowerBound(vector<int> &arr,int left,int right,int target,int ans){
//     if(left>right) return ans;
//     int mid=(left+right)/2;
//     if(arr[mid]>=target){
//         ans=mid;
//         return lowerBound(arr,left,mid-1,target,ans);
//     }
//     else{
//         return lowerBound(arr,mid+1,right,target,ans);
//     }
// }


// int main(){
//     vector<int> arr={3,5,10,15,19};

//     int target=19;
//     int left=0;
//     int right=arr.size()-1;
//     int ans=arr.size();

//     cout<<lowerBound(arr,left,right,target,ans)<<endl;

// }



//UPPER BOUDN ONLY CHANGE = NOT

// #include <iostream>
// #include <vector>
// using namespace std;


// int upperBound(vector<int> &arr,int left,int right,int target,int ans){
//     if(left>right) return ans;
//     int mid=(left+right)/2;
//     if(arr[mid]>target){
//         ans=mid;
//         return upperBound(arr,left,mid-1,target,ans);
//     }
//     else{
//         return upperBound(arr,mid+1,right,target,ans);
//     }
// }


// int main(){
//     vector<int> arr={3,5,10,15,19};

//     int target=19;
//     int left=0;
//     int right=arr.size()-1;
//     int ans=arr.size();

//     cout<<upperBound(arr,left,right,target,ans)<<endl;

// }

//Search Insert Position

//Problem Statement: You are given a sorted array arr of distinct values and a target value x.
// You need to search for the index of the target value in the array.


//GIVEN: SORTED ARRAY  ALREADY . WHERE TO INSERT TARGET VALUE 

//Brute force appraoch 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={1,2,4,7};
//     int tar=2;

//     //if present return index if not return where we can insert it .

//     for(int i=0;i<arr.size();i++){
//      if(arr[i]==target||arr[i]>target){
//             cout<<mid; break;}
//     }
//     cout<<endl;
// }


//BINARYY SEARCH POINTERS

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;


// int search(vector<int> &arr,int tar,int ans , int left , int right){
//     while(left<=right){     //keep <= binary 
//         int mid=(left+right)/2;
//         if(arr[mid]>=tar){
//             ans=mid;
//             right=mid-1; 
//         }
//         else{
//             left=mid+1;
//         }        
//     }
//     return ans;

// }


// int main(){
//     vector<int> arr={1,2,4,7};
//     int ans=-1;
//     int tar=6;
//     int left=0;
//     int right=arr.size()-1;

//     cout<<search(arr,tar,ans,left,right)<<endl;


// }


//Floor and Ceil in Sorted Array
//Problem Statement: ou're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1]. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x

// #include <iostream>
// #include <vector>
// using namespace std;

// void floorAndCeil(vector<int> &arr,int tar, int left, int right ,int *floor, int *ceil){
//     if(left>right){
//         return;
//     }
//     int mid=(left+right)/2;

//     if(arr[mid]==tar){
//         *ceil=arr[mid];
//         *floor=arr[mid];
//         return;
//     }
//     if(arr[mid]>tar){
//         *ceil=arr[mid];
//         return floorAndCeil(arr,tar,left,mid-1,floor,ceil);
//     }
//     if(arr[mid]<tar){
//         *floor=arr[mid];
//         return floorAndCeil(arr,tar,mid+1,right,floor,ceil);
//     }

// }



// int main(){
//     vector<int> arr={3, 4, 4, 7, 8, 10};
//     int tar=5;
//     int left=0;
//     int right=arr.size()-1;

//     int floor=0;
//     int ceil=arr.size();

//     floorAndCeil(arr,tar,left,right,&floor,&ceil);
//     cout<<floor<<'\t'<<ceil<<endl;
// }

//Last occurrence in a sorted array
//Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. 
//If the target is not found then return -1. Note: Consider 0 based indexing  //last occurence higher  //first occurence =lower bound


//Brute force
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={3, 4, 13, 13, 13, 20, 40};
//     int target=13;
//     int pos=-1;

//     for(int i=arr.size()-1;i>=0;i--){  //start from the last for the last occurence
//         if(arr[i]==target){
//             pos=i;   
//             break;
//         }
//     }
//     cout<<pos<<endl;

// }



//Binary Search

// #include <iostream>
// #include <vector>
// using namespace std;

// void lastOccurence(vector<int> &arr,int *ans , int target , int left , int right){
//     if(left>right) return;

//     int mid=(left+right)/2;

//     if(arr[mid]==target){
//         *ans=mid;
//         return lastOccurence(arr, ans , target , mid+1 , right);
//     }
//     else if(arr[mid]>target){
//         return lastOccurence(arr , ans , target , left , mid-1);
//     }

//     else {           //if(arr[mid]<target)
//         return lastOccurence(arr , ans , target , mid+1, right);
//     }

// }

// int main(){
//     vector<int> arr={3, 4, 13, 13, 13, 20, 40};
//     int target=13;
//     int ans=-1;

//     int left=0;
//     int right=arr.size()-1;

//     lastOccurence(arr , &ans ,target ,  left , right);

//     cout<<ans<<endl;


// }


//Count Occurrences in Sorted Array
//BRUTE FORCE 

// #include <iostream>
// #include <vector>
// using namespace std;


// int main(){
//     vector<int> arr={2, 2 , 3 , 3 , 3 , 3 , 4};
//     int occur=0;
//     int x=3;

//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==x){
//             occur++;
//         }
//     }

//     cout<<"OCCURENCES IN THE ARRAY: "<<occur<<endl;
// }

//USING BINARY SEARCH

// #include <iostream>
// #include <vector>
// using namespace std;


// void countOccur(vector<int> &arr,int left , int right , int tar ,int *occur){
//     if(left>right) return;

//     int mid=(left+right)/2;

//     if(arr[mid]==tar){     //if(arr[mid]==tar)
//         *(occur)+=1;
//         countOccur(arr,mid+1,right , tar , occur);   
//         countOccur(arr, left , mid-1, tar , occur);
//         return; //instead of return countOccur(arr,mid+1,right , tar , occur); return countOccur(arr, left , mid-1, tar , occur);
//         countOccur(arr, left , mid-1, tar , occur);
//     }
//     if(arr[mid]>tar){
//         return countOccur(arr,left , mid-1 , tar , occur);
//     }
//     else{  //arr[mid]>tar
//         return countOccur(arr , mid+1 , right , tar , occur);
//     }

// }


// int main(){
//     vector<int> arr={1, 1, 2, 2, 2, 2, 2, 3};

//     int left=0;
//     int right=arr.size()-1;
//     int occur=0;
//     int tar=2;

//     countOccur(arr , left , right , tar , &occur);


//     cout<<"OCCURENCES IN THE ARRAY: "<<occur<<endl;


// }


//Search Element in a Rotated Sorted Array
//Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. 
//The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1.

//BRUTE FORCE 
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={4, 5, 6, 7, 0, 1, 2};
//     int tar=0;

//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==tar){
//             cout<<i<<endl;
//             break;
//         }
//     }
// }

//BINARY SEARCH

// #include <iostream>
// #include <vector>
// using namespace std;

// void SearchRotatedArray(vector<int> arr , int tar , int left , int right , int *index){
//     if(left>right) return;

//     int mid=(left+right)/2;

//     if(arr[mid]==tar){
//         *index=mid;
//         return;
//     }   
//     if(arr[mid]>tar){
//         return SearchRotatedArray(arr , tar , mid+1 , right , index);
//     }
//     else{
//         return SearchRotatedArray(arr , tar , left , mid-1  , index);
//     }
// }

// int main(){
//     vector<int> arr={4, 5, 6, 7, 0, 1, 2};
//     int tar=0;
//     int left=0;
//     int right=arr.size()-1;
//     int index=-1;

//     SearchRotatedArray(arr , tar ,left , right ,&index);

//     cout<<"INDEX FOUND AT: "<<index;   
// }


//Search Element in a Rotated Sorted Array

//Given an integer array nums, sorted in ascending order (with distinct values) and a target value k. 
//The array is rotated at some pivot point that is unknown. Find the index at which k is present and if k is not present return -1.


//BRUTE FORCE
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> arr={4, 5, 6, 7, 0, 1, 2};
//     int tar=0;
//     int pos=-1;

//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==tar){
//         pos=i;
//         break;
//         }
//     }
//     cout<<"The position of the target is: "<<pos<<endl;
// }


//OPTIMAL APPROACH 

// #include <iostream>
// #include <vector>
// using namespace std;

// void findTarget(vector<int> &arr , int left , int right , int *pos , int tar){
//     if(left>right) return ; 

//     while(left <= right){
//         int mid=(left+right)/2;
//         if(arr[mid]==tar) {
//             *pos=mid;
//             return; 
//         }

//         if(arr[left]<=arr[mid]){       
//             if(arr[left]<=tar && arr[mid]>tar){
//                 return findTarget(arr , left , mid-1 , pos , tar);    
                 
//             }
//             else{
//                 return findTarget(arr , mid+1 , right , pos , tar);

//             }
//         }
//         else{  //if(arr[right]>arr[mid]) if the right array is sorted. 
            // if(arr[right]>=tar && arr[mid] < tar){
            //     return findTarget(arr , mid+1 , right , pos , tar);
            // }
            // else{
            //     return findTarget(arr , left , mid-1 , pos , tar);

            // }
//         }
// }}

// int main(){
//     vector<int> arr={4, 5, 6, 7, 0, 1, 2};
//     int pos=-1;
//     int left=0;
//     int right=arr.size()-1;
//     int tar=2;

//     findTarget(arr , left ,right , &pos , tar);

//     cout<<pos<<endl;


// }


//Search Element in Rotated Sorted Array II
//Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. 
//Now the array is rotated at some pivot point unknown to you. Return True if k is present and otherwise, return False. (change duplicate values,)

//OPTIMAL APPAORACH
// #include <iostream>
// #include <vector>
// using namespace std;

// void searchRotatedArray(vector<int> &arr , int left , int right , int tar , bool *ans){
//     if(left>right)  return;

//     while(left<=right){
//         int mid=(left+right)/2;

//         if(arr[mid]==tar){
//             *(ans)=true; return;
//         }

//         //to fast
//         if(arr[mid]==arr[left]){
//             left++;
//             continue;  //new left new right
//         }

//         if(arr[mid]==arr[right]){
//             right--;
//             continue;
//         }

//         if(arr[left]<=arr[mid]){
//             if(arr[left]<=tar && arr[mid]>=tar){
//                 return searchRotatedArray(arr, left , mid-1 , tar , ans);
//             }
//             else{
//                 return searchRotatedArray(arr , mid+1 , right , tar , ans);
//             }
//         }
//         else{   //arr[right]>=arr[mid]
//             if(arr[right]>=tar && arr[mid] <=tar){
//                 return searchRotatedArray(arr , mid+1 , right , tar , ans);
//             }
//             else{
//                 return searchRotatedArray(arr , left , mid-1 , tar , ans);

//             }
//         }
//     }
// }



// int main(){
//     vector<int> arr={7, 8, 1,1,1, 2, 3, 3, 3, 4, 5, 6};
//     int tar=3;
//     int left=0;
//     int right=arr.size()-1;
//     bool ans=false;

//     searchRotatedArray(arr,left,right,tar,&ans);

//     cout<<ans<<endl;

// }

//Minimum in Rotated Sorted Array
//Given an integer array arr of size N, sorted in ascending order (with distinct values), the array is rotated at any index which is unknown.
// Find the minimum element in the array.

//Brute force
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main(){
//     vector<int> arr={4,5,6,7,0,1,2,3};
//     int smallest=INT_MAX;

//     for(int i=0 ; i<arr.size() ; i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }

//     cout<<smallest<<endl;
// }


//Optimal   Approach
#include <iostream>
#include <vector>
using namespace std;

int  minimumValue(vector<int> &arr, int left , int right){
    if(left>=right){
        return arr[left];
    } 

    //ye tere phle waala qus nhi h smjh aayi kyaaa s
        int mid=(left+right)/2;

        if(arr[mid]>arr[right]){
            return minimumValue(arr , mid+1 , right);
        }
        else{
            return minimumValue(arr , left , mid);
        }
}



int main(){
    vector<int> arr={4,5,6,7,-1,0,1,2,3};
    int left=0;
    int right=arr.size()-1;

    cout<<"MINIMUM VALUE IN THE ARRAY: "<<minimumValue(arr , left , right)<<endl;


}