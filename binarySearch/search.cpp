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



#include <iostream>
#include <vector>
using namespace std;


int lowerBound(vector<int> &arr,int left,int right,int target){
    if(left>right) return arr.size();
    int mid=(left+right)/2;
    if(arr[mid]>=target){
        return mid;
    }
    else{
        return lowerBound(arr,mid+1,right,target);
    }
}


int main(){
    vector<int> arr={3,5,10,15,19};

    int target=1;
    int left=0;
    int right=arr.size()-1;

    cout<<lowerBound(arr,left,right,target)<<endl;

}