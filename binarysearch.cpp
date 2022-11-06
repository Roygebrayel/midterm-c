int binarysearch ( int *arr , int size , int val){

    int start =0,end=size-1;
    int middle;
    while(start<end){
        middle= (start + end) /2;
        if(arr[middle] == val)
        return middle;
        else if(arr[middle]<val){
            end = middle -1;

                else if (arr[middle] > val)
            {
                start = middle + 1;
            }
        }
    }
    return -1;
}