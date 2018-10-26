1. int A,B,C;
    tipe data untuk A,B,C adalah integer

2. cout<< "Mengurutkan 3 Bilangan Bulat dari yang Terkecil Hingga yang Terbesar"<< endl;
    cout<<              : output
    "Mengurutkan ..."   : print dari cout<<
    endl                : enter

3.  cout<< "Input Bilangan : "<<endl;
    cin >> A >> B >> C;

    cout<<              : output
    "Input Bilangan :"  : print dari cout<<
    endl                : enter
    cin >> A >> B >> C; : input A B C

4.  cout<<endl << "Hasilnya Adalah : "<<endl;
    cout<<              : output
    "Hasilnya Adalah :" : print dari cout<<
    endl                : enter

5.       if (A<B && B<C){
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

=====================================================================
- Jika A lebih kecil dari B & B lebih kecil dari C, maka hasilnya : A B C
- Selain itu, Jika A lebih kecil dari C & C lebih kecil dari B, maka hasilnya : A C B
- Selain itu, Jika B lebih kecil dari A & A lebih kecil dari C, maka hasilnya : B A C
- Selain itu, Jika B lebih kecil dari C & C lebih kecil dari A, maka hasilnya : B C A
- Selain itu, Jika C lebih kecil dari A & A lebih kecil dari B, maka hasilnya : C A B
- Selain itu, hasilnya : C B A


Screenshot :
![Alt text](https://raw.githubusercontent.com/arkyana/Praktikum3/master/Soal2/2.png)
