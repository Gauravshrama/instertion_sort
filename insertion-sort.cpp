#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){

for (int  i = 1 ; i < n ; i++){
    int temp = arr[i];
       int j = i-1; 
    while( j >= 0){
        if(arr[j] > temp){

            arr[j+1] = arr[j]; 
        }
        else{
            break;
        }

        j--;
    }
    arr[j+1]=temp;
}

cout<< "the sorted arry is";
for(int i = 0 ; i <=n ; i++ )
       cout<<arr[i]<<endl;

}
int main(){

    int arry[]= {3,1,6,7,4,5};
    int n = 6;
     
     insertion_sort(arry,n);


}