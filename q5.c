#include<stdio.h>

int main(void){
	int vn[100], cont=0,n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		scanf("%d",&vn[i]);
	}
	for(int j=0;j<=vn[n];j++){
		for(int w=0;w<=vn[n];w++){
			if(vn[j]==vn[w]){
				cont++;
			}
		}
	}
	if(cont!=0){
		printf("sim\n");
	}else{
		printf("nao\n");
	}
}
