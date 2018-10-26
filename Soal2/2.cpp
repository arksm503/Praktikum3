#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
        cout<< "Mengurutkan 3 Bilangan Bulat dari yang Terkecil Hingga yang Terbesar"<< endl;
        cout<< "Input Bilangan : "<<endl;
        cin >> A >> B >> C;
        cout<<endl << "Hasilnya Adalah : "<<endl;

            if (A<B && B<C){
                cout <<A<<" "<<B<<" "<<C;
            }else
                if(A<C && C<B){
                    cout <<A<<" "<<C<<" "<<B;
                }else
                    if(B<A && A<C){
                        cout <<B<<" "<<A<<" "<<C;
                    }else
                        if(B<C && C<A){
                            cout <<B<<" "<<C<<" "<<A;
                        }else
                            if(C<A && A<B){
                                cout <<C<<" "<<A<<" "<<B;
                            }else
                                cout <<C<<" "<<B<<" "<<A;











 return 0;
}
