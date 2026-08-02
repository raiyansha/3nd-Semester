#include<iostream>
#include<climits>

void maxProduct(int arr[], int size){
    if(size<2){
        return;
    }

    int max_product=INT_MIN;
    int max_i, max_j;

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(max_product < arr[i] * arr[j]){
                max_product = arr[i] * arr[j];
                max_i = i;
                max_j = j;
            }
        }
    }


    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] * arr[j] == max_product){
                std::cout << "Pairs with the maximum product are: (" << arr[i] << "," << arr[j] << ")\n";
            }
        }
    }
}

int main(){
    int arr[] = {-10, -3, 5, 6, -2};
    int size = sizeof(arr) / sizeof(arr[0]);
    maxProduct(arr, size);
    return 0;
}
