#include<stdio.h>
#include<math.h>

main(){
	
	int a ,b ,c ;

    if ( a < b && a < c){
        printf("1 - %d",a);
    }
    
    if ( b < c){
    printf("2 - %d",b);
    printf("3 -%d ",c);
    }
    else{
    
    printf("2 -%d ",c);
    printf("3 - %d",b);
    }
    if ( b < a && b < c) {
        printf("1 -%d ",b);
    }
    if ( a < c){
        printf("2 -%d ",a);
        printf("3 -%d ",c);
    }
    else{
        printf("2 -%d ",c);
        printf("3 -%d ",a);
    }

    if( c < a && c < b){
    printf("1 -%d ",c);
    }
    if ( c < b) {
    printf("2 -%d ",a);
    printf("3 -%d ",b);
    }
    else{

    printf("2 -%d ",b);
    printf("3 -%d ",a);
    }
}