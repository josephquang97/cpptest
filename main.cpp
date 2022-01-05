/**
 * @file main.cpp
 * University of Illinois
 * Object-Oriented Data Structures in C++ - Week 2
 * Hello World Project
 *
 * @author Eric Huber - University of Illinois staff - July 2019
**/

// You need to include some header(s) here!
#include <iostream>
#include "main.h"
// You need to define your main() function here!
int main(){
    fibonaci(10);
	return 0;
}

// Notes:
// n0 n1 n2 n3 n4 n5 ...
// 00 01 01 02 03 05 ...
void fibonaci(int n){
    int n_prev = 0, n_reg = 1;
    int n_next;
    std::cout << n_prev << std::endl;
    std::cout << n_reg << std::endl;
    for (int i = 2; i <= n; i++){
        n_next = n_prev + n_reg;
        n_prev = n_reg;
        n_reg = n_next;
        std::cout << n_next << std::endl; 
    }
}

