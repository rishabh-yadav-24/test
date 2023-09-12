#include<stdio.h>
int main(){
	int size,x,i;
	scanf("%d",&size);
	int array[size];
	for ( i=0; i<size; i++){
		scanf("%d",&array[i]);
	}	
	int num=0;
	for (i=0; i<size; i++){
		x=array[i]%10;
		num= num + (x * 10^(size-i-1));
		}
	if (num%10==0)
        printf("Yes");
    else
	    printf("No");
}
