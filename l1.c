/*write a c programming using a array to search an element in the list*/
#include<stdio.h>
int  lsearch(int arr[],int size,int key){
int i;
for(i=0;i<size;i++){
if(arr[i]==key)return i;
}
if(i==size) return -1;
}
int main(){
int arr[10];
printf("enter 10 values:");
int i;
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
int key;
printf("enter element to search for i");
scanf("%d",& key);
if(lsearch(arr,10,key)==-1)
printf("element not found");
else printf("element found at %d index",lsearch(arr,10,key));
return 0;
}
