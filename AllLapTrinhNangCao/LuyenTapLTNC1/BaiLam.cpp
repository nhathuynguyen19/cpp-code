#include <iostream>
#include <string>
#include "ham.h"
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.inp","r",stdin);
    #endif
    
    //bai 1 
	daoTuInChuoi();
	//bai2
	delWord();
	//bai 3
	countCharOccurrences();
    //bai 4
    findMostFrequentChar();
    //bai 5
    delPosToN();
    //bai 6
    splitPosToN();
} 