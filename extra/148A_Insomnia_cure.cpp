#include <stdio.h>
 
 
int main(){
	
	int k,l,m,n ; 
	int d ; 
	int total = 0 ;
	
	scanf("%d%d%d%d%d", &k,&l,&m,&n,&d) ;
	
	for(int i = 1 ; i <= d ; i++){
		if(i%k == 0){
			total++ ; 
		}else if(i%l == 0){
			total++ ;
		}else if(i%m == 0){
			total++ ;
		}else if(i%n == 0){
			total++ ; 
		}else{
			
		}
	}
	
	printf("%d\n", total) ; 
	
	
	
	
}
