1. int A,B,C;
    tipe data untuk A,B,C adalah integer

2. cout<< "Menentukan Nilai Tengah"<< endl;
    cout<<              : output
    "Menentukan  ..."   : print dari cout<<
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

=====================================================================
- Jika A lebih kecil dari B & B lebih kecil dari C, maka hasilnya : B
- Selain itu, Jika A lebih kecil dari C & C lebih kecil dari B, maka hasilnya : C
- Selain itu, Jika B lebih kecil dari A & A lebih kecil dari C, maka hasilnya : A
- Selain itu, Jika B lebih kecil dari C & C lebih kecil dari A, maka hasilnya : C
- Selain itu, Jika C lebih kecil dari A & A lebih kecil dari B, maka hasilnya : A
- Selain itu, hasilnya : B

Screenshot :
![Alt text](https://raw.githubusercontent.com/arkyana/Praktikum3/master/Soal3Ganjil/3.png)

