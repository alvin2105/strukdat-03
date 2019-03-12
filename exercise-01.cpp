/*
nama	: alvin
npm	: 140810180013
deskripsi	: pretest-03
tgl	: 12 maret 2019
kelas	: A
*/
#include<iostream>
#include<math.h>
using namespace std;
typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s) {
	cout<<"masukan panjang\t: ";
	cin>>s->panjang;
	cout<<"masukan lebar\t:" ;
	cin>>s->lebar;
}
float keliling(segiempat s) {

	 return (2*s.panjang)+(2*s.lebar);

 }
float luas(segiempat s) {

return	s.panjang*s.lebar;

}

float diagonal(segiempat s) {

	return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));


}
void print(segiempat s) {
cout<<"keliling\t: "<<keliling(s)<<endl;
cout<<"luas\t: "<<luas(s)<<endl;
cout<<"diagonal\t: "<<diagonal(s)<<endl;
 }

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}
