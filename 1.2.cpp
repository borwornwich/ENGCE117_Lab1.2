#include <stdio.h>
#include <string.h>

void GetSet( int Arr[], int *num ) ;

int main() {
 int data[100], num ;
// data = new int[n] ;
 GetSet( data, &num ) ;
 
 printf("All MEMBERS %d :\n", num) ;
    for (int i = 0; i < num; i++) {
        printf("data member %d: %d\n", i + 1, data[i]);
    }
 
 return 0 ;
}//end function

void GetSet( int Arr[], int *num ) {
	printf( "Enter the number of member : " ) ;
    scanf( "%d", num ) ;
    
    for( int i = 0 ; i < *num ; i++ ) {
    	printf( "No[%d] : ", i+1 ) ;
    	scanf( "%d", &Arr[i] ) ;
	}
}

