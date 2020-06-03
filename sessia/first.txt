#include <iostream>
#include <string>
using namespace std;
struct owner{
string name;
string surname;
int price;
string phone;
int room_Count;
};
struct Building{
string name;
string city;
int count_of_ouners;
owner *Owners;
};
void Seach_for_price(Building b[],int size){
string nameOFCity;
cin>>nameOFCity;
int minprice,maxprice;
cin>>minprice>>maxprice;
for(int i=0;i<size;i++){
if(b[i].city==nameOFCity){
for(int j=0;j<b[i].count_of_ouners;j++){
if((b.[i].Owners[j].price>minprice) && (b.[i].Owners[j].price<maxprice)){
cout<<b.[i].Owners[j].name<<" "<<b.[i].Owners[j].surname<<" "<<b.[i].Owners[j].phone<<" "<<b.[i].Owners[j].price<<" "b.[i].Owners[j].room_Count;
}
}
}
}
}
int main(){
int n;
cin>>n;
Building builds=new Building[n];
for(int i=0;i<n;i++){
cin>>builds[i].name<<builds[i].city<<builds[i].count_of_ouners;
int m=builds[i].count_of_ouners;
for(int j=0;j<m;j++{
		cin>>builds[i].Owners[j].name>>builds[i].Owners[j].surname>>builds[i].Owners[j].phone>>builds[i].Owners[j].price>>builds[i].Owners[j].room_Count;
		
		
		}}

Search_for_price(builds,n);
cout<<"Stamgaziev Isatais work";
return 0; 
}
