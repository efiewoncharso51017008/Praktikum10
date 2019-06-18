#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
main ()
{
char nim[8][10],nm[20][10],jwb;
int i,j;
float n1[10],n2[10],na[10];
isi:
clrscr();
cout<<"Masukan Jumlah Data : ";cin>>j;
for (i=1;1<=j;i++)
{
cout<<"Data Ke- : "<<i<<endl;
cout<<"Masukan Nim\t : ";cin>>nim[i];
cout<<"Masukan Nama\t : ";gets(nim[1]);
cout<<"Nilai 1 \t : ";cin>>n1[1];
cout<<"Nilai 2 \t : ";cin>>n2[1];

na[i]=(n1[i]+n2[i])/2;
cout<<endl;
}
cout<<"              DATA MAHASISWA"<<endl;
cout<<"=========================================="<<endl;
cout<<"No.       NIM        Nama          Nilai  "<<endl;
cout<<"                                          "<<endl;
cout<<" "<<endl;

for (i=1;i<=j;i++)
{
cout<<setiosflags(ios::right)<<setw(3)<<i;
cout<<setprecision(3)<<"  "<<nim[i];
cout<<setprecision(4)<<"           "<<nim[i];
cout<<setprecision(5)<<"                "<<na[i]<<endl;
}
cout<<"============================================="<<endl;
cout<<"Mau input Data lagi [Y/T] : ";jwb=getche();
if (jwb=='Y'||jwb=='Y')
goto isi;
getch();
}

