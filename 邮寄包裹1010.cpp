/*某邮局对邮寄包裹有如下规定：若包裹的重量超过30千克,不予邮寄，对可以邮寄的包裹每件收手续费0.2元，再加上根据下表按重量wei计算的结果：
   
重量(千克)      收费标准(元/公斤)          
wei<=10              0.80        
10<wei<=20        0.75         
20<wei<=30        0.70 
请你编写一个程序，输入包裹重量，输出所需费用或”Fail”表示无法邮寄。

输入
输入一个正整数，表示邮寄包裹的重量。

输出
输出对应的费用(答案保留2位小数)或“Fail”表示无法邮寄。

样例输入
7

样例输出
5.80*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int w;		//质量。一件的质量是分段计算的。
	cin>>w;
	double m=0.0;	//钱数
	if(w>30){
		cout<<"Fail";
	}else{
		if(w>20){			//多于20的，此时剩下的20还分两段，不是都0.7。
			m+=(w-20)*0.7;
			w=20;
		}
		if(w>10){			//多于10的，此时剩下的10不是0.75，是0.8。
			m+=(w-10)*0.75;
			w=10;
		}
		m+=w*0.8;		//不多于10的
		printf("%.2lf",m+0.2);	//加上一件的手续费
	}
}
