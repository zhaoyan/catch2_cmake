#include<stdio.h>
#include <iostream>
#include "sub.h"
#include "fab.h"

using namespace std;

int main(){
		int i = 2;
		int j = 3;
		printf("%d + %d is %d\n", i ,j,Sub(i,j));
		cout<<Fibonacci(3)<<endl;
		printf("hello world\n");
		return 0;
}
