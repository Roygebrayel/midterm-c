// void printf (int *arr , int size){
//     if (size == 0){
//         return;
//     }
//     cout<<arr[size-1];
//     return printf(arr, size-1);
// }

/
    /
    /
    /
    /
    /
    /
    /

    // void reverse(int* arr, int start, int end){
    //     if (start>end){
    //         return;

    //     }
    //     int c = arr[end];
    //     arr[end]=arr[start];
    //     arr[start]=c;

    //     return reverse(arr,  start+1,  end-1);
    // }

    /
    /
    /
    /
    /
    /
    /

    int NbOccurrences(int tab[], int size, int number){
        int c=0;
        if(size==0){
            return 0;
            cout<<"ayre bel dsa";
        }
        
        if (tab[size-1]== number){
            c++;
        }
        c = NbOccurrences(tab, size-1,  number);
        
        return c;
        }
