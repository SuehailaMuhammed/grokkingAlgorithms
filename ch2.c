#include <stdio.h>
#include <stdlib.h>

int  findSmallest(int arr[],int n){
int smallest=arr[0];
int smallest_index=0;
for(int i=0;i<n;i++){
    if (arr[i]<smallest){
        smallest=arr[i];
       smallest_index=1;
    }
}
return smallest;
}

void  selectionSort(int arr[],int size){
int x=size;
int newArr[x];
int smallest;
for(int i=0;i<x;i++){
    smallest=findSmallest(arr,size);
    newArr[i]=smallest;
for(int j=0;j<size;j++){
  if(arr[j]==smallest){
    for(int y=j;y<size;y++){
    arr[y]=arr[y+1];
            }
   break;

        }
    }
    size--;
}
for(int z=0;z<x;z++){
    printf("%d ",newArr[z]);
}

}

int main(){
int arr[]={6, 4, 8, 12, 10};
int size=5;
selectionSort(arr,size);
return 0;

}