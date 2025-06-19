class Solution {
public:

  void merge(vector<int>& arr, int start, int mid, int end){
  vector<int> temp(end-start+1); // end+start+1 is a size of NEW array

  int left=start, right=mid+1, index=0; // these are the pointer used to fill the value in new array

  //left it means left side of array  same for right

  while (left<=mid&& right<=end)
  {
    if (arr[left]<=arr[right])
    {
      temp[index]=arr[left];
      index++, left++;
    }
    else{
      temp[index]=arr[right];
      index++, right++;

    }
    
  }
  
  // IF there are still values remaining in the LEFT array

  while (left<=mid)

  { 
     temp[index]=arr[left];
      index++, left++;
  }
  
 // IF there are still values remaining in the RIGHT array
  while (right<=end)

  { 
     temp[index]=arr[right];
      index++, right++;
  }

  //transfer value from temp array to original array
  index=0;//reset the array
  while (start<=end)
  {
    arr[start]=temp[index];
    start++, index++;
  }
  
}
  void mergesort(vector<int>& arr, int start, int end){
  if (start==end)
  {
    return;
  }
  int mid=start+(end-start)/2;

  //for left side of array

  mergesort(arr,start, mid);

  //for left side of array
  mergesort(arr, mid+1, end);

  merge(arr, start, mid,end );
  }
  


    vector<int> sortArray(vector<int>& nums) {

        mergesort(nums, 0, nums.size()-1);

        return nums;
 
    }
    
};