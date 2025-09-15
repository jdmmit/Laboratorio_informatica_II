#include <iostream>
using namespace std;
void fun_a(int *px, int *py){ int tmp=*px; *px=*py; *py=tmp;}
void fun_b(int a[], int tam){
  int f,l; int *b=a;
  for(f=0,l=tam-1; f<l; f++, l--) fun_a(&b[f], &b[l]);
}
int main(){
  int array[10]={0,1,2,3,4,5,6,7,8,9};
  cout<<"Dir base: "<<(void*)array<<"\n";
  cout<<"Dir array[3]: "<<(void*)&array[3]<<" valor: "<<array[3]<<"\n";
  fun_b(array,10);
  for(int i=0;i<10;i++) cout<<array[i]<<" ";
  cout<<"\n";
}