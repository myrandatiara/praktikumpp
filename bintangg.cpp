#include <iostream>
using namespace std;

int main(){
    for(int kosong=1; kosong<=5; kosong++){
        for(int spasi = 5; spasi>kosong; spasi--){
            cout<<" ";
        }
        for (int bintang=1; bintang <= kosong; bintang++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n"<<"\n";

    for (int bintang=5; bintang>=1; bintang--){
        for(int spasi=1; spasi<=bintang; spasi++){
            cout<<"*";
        }
        cout<<"\n";
    }

    cout << endl << endl;

    for(int kosong=1; kosong<=5; kosong++){
        for(int spasi=1; spasi<=5-kosong; spasi++){
            cout<<" ";
        }
        for (int bintang=1; bintang<=(2*kosong-1); bintang++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 32000;
}