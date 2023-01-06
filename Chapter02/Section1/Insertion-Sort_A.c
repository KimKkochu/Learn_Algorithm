#include <stdio.h>

int main(){
    int A_arr[6] = {5, 2, 4, 6, 1, 3};
    for(int j=1;j<(sizeof(A_arr)/sizeof(int));j++){
	    int key = A_arr[j];
	    int i = j - 1;
	    while(i > -1 && A_arr[i] > key){
		    A_arr[i+1] = A_arr[i];
		    i = i - 1;
	    }
	    A_arr[i+1] = key;
    }
    for(int i=0; i<6; i++){
	    printf("%d ", A_arr[i]);
    }
    printf("\n");
    return 0;
}
