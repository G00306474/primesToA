#include  <stdio.h>


int isprime(unsigned int testNum){
	
	unsigned int i;

	for(i = 2; i < testNum; i++){
		if(testNum % i == 0){
			return 0;
		}	

	}
	return 1;
	
}

int main(int argc, char *argv[]){
	unsigned int test=653;

	if(isprime(test))
		printf("%d is prime\n", test);
	else
		printf("%d Not Prime\n", test);
	return 0;

}
