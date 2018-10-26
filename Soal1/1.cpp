#include <iostream>
using namespace std;

int main() {
    int max=0, n, x;
        cout<< "Mencari Bilangan Terbesar dari Sejumlah Bilangan Acak yang Diinputkan"<< endl;
        cout<<"Input Jumlah Bilangan : ";
        cin>>n;
        cout<<endl;

        for (int i=0; i < n; i++) {
            cout<<"Input Bilangan ke " << i+1 << ": ";
            cin >> x;
        if (x>max)
            max = x;

        }
        cout<< "Bilangan Terbesar Adalah : " << max;


return 0;
}
