#include <iostream>
using namespace std;

int main(){
    int nilai[] = {32, 42, 76, 31, 57};

    int length = sizeof(nilai)/sizeof(*nilai);
    for(int i = 0; i < length; i++){
        cout << "Nilai ke-" << i + 1 << " : " << nilai[i] << endl;
    }

    return 0;
}