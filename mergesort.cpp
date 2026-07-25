// #include <iostream>
// #include <vector>
// using namespace std;


// void merge(vector<int>& arr,int low , int mid , int high){
//     vector<int> temp;
//     int leftIndex=low;
//     int rightIndex=mid+1;

//     while(leftIndex<=mid && rightIndex<=high){
//         if(arr[leftIndex]<=arr[rightIndex]){
//             temp.push_back(arr[leftIndex]);
//             leftIndex++;           
//         }
//         else{
//             temp.push_back(arr[rightIndex]);
//             rightIndex++;
//         }
//     }

//     while(leftIndex<=mid){
//         temp.push_back(arr[leftIndex]);
//         leftIndex++;
//     }
//     while(rightIndex<=mid){
//         temp.push_back(arr[rightIndex]);
//         rightIndex++;
//     }

//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }


// void mergesort(vector<int>& arr,int low , int high){
//     if(low>=high){
//         return;
//     }
//     int mid=(low+high)/2;
//     mergesort(arr,low,mid);
//     mergesort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }

// int main(){
//     vector<int> arr={5,1,2,4,3};
//     int low=0;
//     int high=arr.size()-1;
//     mergesort(arr,low,high);

//     for(int i=0;i<=high;i++){
//         cout<<arr[i]<<',';
//     }

//     cout<<endl;

// }


#include <iostream>
#include <vector>

std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> resultArray;
    size_t leftIndex = 0; 
    size_t rightIndex = 0;
    while (leftIndex < left.size() && rightIndex < right.size()) {
        if (left[leftIndex] < right[rightIndex]) {
            resultArray.push_back(left[leftIndex]);
            leftIndex++;
        } else {
            resultArray.push_back(right[rightIndex]);
            rightIndex++;
        }
    }

    while (leftIndex < left.size()) {
        resultArray.push_back(left[leftIndex]);
        leftIndex++;
    }

    while (rightIndex < right.size()) {
        resultArray.push_back(right[rightIndex]);
        rightIndex++;
    }

    return resultArray;
}

std::vector<int> mergeSort(const std::vector<int>& unsortedArray) {
    if (unsortedArray.size() <= 1) {
        return unsortedArray;
    }

    size_t middle = unsortedArray.size() / 2;

    std::vector<int> left(unsortedArray.begin(), unsortedArray.begin() + middle);  
    std::vector<int> right(unsortedArray.begin() + middle, unsortedArray.end());

    return merge(mergeSort(left), mergeSort(right)); 
}

int main() {
    std::vector<int> unsortedArray = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    std::cout << "Original array: ";
    for (int num : unsortedArray) std::cout << num << " ";
    std::cout << "\n";

    std::vector<int> sortedArray = mergeSort(unsortedArray);

    std::cout << "Sorted array:   ";
    for (int num : sortedArray) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}