/*一密码变换规则如下：一个正整数对应一个字符；如果该数模123的值在97-122范围，变换为ASCII为该余数对应的小写字符；如果变换不了小写字符，将该数模91，若余数在65-90范围，变换为ASCII为该余数对应的大写字符；如果变换不了大小写字符，变换为“*”。输入一个正整数，输出变换后的字符。

输入
输入一个正整数n(1<=n<=1000)表示原始密码。

输出
输出变换后的密码。

样例输入
42

样例输出
* */
#include<iostream> 
using namespace std;
int main(){
	int a,b;
	string c;
	cin>>a;
	b=a%123;
	if((97<=b)&(122>=b))
	{
		c=b;
	cout<<c;
	}
	else
	{
		b=a%91;
	    if((65<=b)&(90>=b))
	    {
	    	c=b;
	    	cout<<c;
		}
		else
		cout<<"*";
	}
	    
return 0;
}  
