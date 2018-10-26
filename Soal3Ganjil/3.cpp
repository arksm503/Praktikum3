#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
        cout<< "Menentukan Nilai Tengah"<< endl;
        cout<< "Input Bilangan : "<<endl;
        cin >> A >> B >> C;
        cout<<endl << "Hasilnya Adalah : "<<endl;

            if (A<B && B<C){
                cout<<B;
            }else
                if(A<C && C<B){
                    cout<<C;
                }else
                    if(B<A && A<C){
                        cout<<A;
                    }else
                        if(B<C && C<A){
                            cout<<C;
                        }else
                            if(C<A && A<B){
                                cout<<A;
                            }else
                                cout<<B;



 return 0;
}
