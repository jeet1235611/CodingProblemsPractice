#include<iostream>
using namespace std;
int main(){
        int i, j;
        int arr[] = {0, 1, 0, 1, 1, 0, 0};
        i = 0, j = 6;

        while(i < j){
                if(arr[i] == 0 && arr[j] == 1){
                        i++;
                        j--;
                }
                else if(arr[i] == 0 && arr[j] == 0 ){
                        i++;
                }
                else
                        {
                                int temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                                i++;
                                j--;
                }
        }

        for(int k = 0; k < 7; k++){
                cout<<arr[k]<<endl;
        }

        return 0;
}

