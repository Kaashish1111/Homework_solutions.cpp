// 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

  public:
    int binarysearch(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        int end=n-1;
        int start=0;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};