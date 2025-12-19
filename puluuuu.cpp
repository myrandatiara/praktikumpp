#include <iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int arr[1000];

    for(int angka = 0; angka<N; angka++){
        cin>>arr[angka];
     }
     for(int angka = 0; angka<N; angka++){
         for(int beda = angka +1; beda < N; beda++){
             if(arr[angka]==arr[beda]){
                 cout<<"Pulu-Pulu"<<endl;
                 return 0;
                 }
            }
         }
    cout << "Puluuuu" << endl;

     return 1;
}