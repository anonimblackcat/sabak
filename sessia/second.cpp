#include <iostream>
#include <vector>
using namespace std;
void fun(vector <int> vec){
int countofdouble;
vector<int>::iterator fir;
vector<int>::iterator sec;
int a,b,c,d;
for(vector<int>::iterator it=vec.begin();it<vec.end();it++){
	a++;
	for(vector <int>::iterator it1=it+1; it1 < vec.end();it1++){
	c++;
	if(*it==*it1){
	fir=it;
	sec=it1;
	vec.erase(it,it1);
	countofdouble++;
	b=c;
	}
	}
if(countofdouble==2){
cout<<"The element is"<<*it<<"and it is located in indexes "<<a<<"and"<<b<<endl;
}
}
}
int main(){
vector <int> vec;
int size;
cin>>size;
int a;
for(int i=0;i<size;i++){
cin>>a;
vec.push_back(a);
}
fun(vec);
return 0;
}
