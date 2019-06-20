#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()
{
char nim[8] [10],nm[20] [10],jwb;
int i,j;
float n1 [10],n2[10],na[10];
isi:
clrscr ();
cout<<"Masukkan jumlah data :";cin>>j;
for (i=1;i<=j;i++)
{
cout<<"Data ke - : "<<i<<endl;
cout<<"Masukkan Nim\t : ";cin>>nim[i];
cout<<"Nilai 1 \t : ";cin>>n1 [i];
cout<<"Nilai 2 \t : ";cin>>n2 [i];
na[i]=(n1[i]+n2[i])/2;
cout<<endl;
}
cout<<"             DATA MAHASISWA"<<endl;
cout<<"======================================"<<endl;
cout<<"NO, NIM      NAMA           NIlai     "<<endl;
cout<<"                                      "<<endl;
cout<<" "<<endl;
for (i=1;i<<j;i++)
{
cout<<setiosflags (ios: :right)<<setw(3)<<i;
cout<<setprecision(3)<<" "<<nim{i};
cout<<setprecision(4)<<"      "<<nm{i};
cout<<setprecision(5)<<"            "<<na{i}<<endl;
}
cout<<"========================================="<<endl;
cout<<"Menu Input Data Lagi {Y/T} : ";jwb=getche();
if (jwb=='Y'||jwb=='Y')
goto isi;
getch();
}