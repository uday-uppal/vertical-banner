#include<iostream>
using namespace std;
void a(){
	for(int i=0;i<8;i++){
		if(i==0){
			cout<<"\t"<<"$";
			cout<<"\n";
			continue;
		}
		for(int j=7-i;j>0;j--){
			cout<<" ";
		}
		cout<<"$";
		if(i==4){
			for(int i=0;i<8;i++)
			cout<<"$";
		}
		if(i!=4){
		
		for(int j=2*(i);j>0;j--){
			cout<<" ";
		}}
		cout<<"$";
		cout<<"\n";
		
	}
	
}
void c(){
	for(int i=1;i<12;i++){
		
		if(i<=6){
			for(int j=5-i;j>0;j--){
				cout<<" ";
			}
			
			if(i==1){
				cout<<" "<<"$"<<"$$$";
			}
			if(i==2){
				cout<<"$";
			}
			cout<<"$";
		}
		if(i>6){
			
			for(int j=1;j<i-6;j++){
				cout<<" ";
			}
			if(i==11){
				cout<<" "<<"$"<<"$$$";
			}
			if(i==10){
				cout<<"$";
			}
			cout<<"$";
		}
		////
		cout<<"\n";
	}
	
}
void d(){
	for(int i=1;i<12;i++){
		cout<<"      ";
		cout<<"$";
		if(i<=6){
			for(int j=0;j<i;j++){
				cout<<" ";
			}
		
			cout<<"$";
		}
		if(i>6){
			
			for(int j=6-(i-6);j>0;j--){
				cout<<" ";
			}
			cout<<"$";
		}
		////
		cout<<"\n";
	}
	
}
void e(){
	for(int i=1;i<11;i++){
		if(i==1){
			cout<<"$$$$$$$$$$";
		}
			if(i==5){
			cout<<"$$$$$$$$$$";
		}
			if(i==10){
			cout<<"$$$$$$$$$$";
		}
		cout<<"$";
			cout<<"\n";

	}
	
}
void f(){
	for(int i=1;i<10;i++){
		if(i==1){
			cout<<"$$$$$$$$$$";
		}
			if(i==5){
			cout<<"$$$$$$";
		}
			
		cout<<"$";
			cout<<"\n";

	}
	
}
void h(){
	for(int i=1;i<10;i++){
	
		if(i!=1&&i!=9)
			cout<<"  ";
			else
			cout<<" $";
		cout<<"$";
			if(i==5){
			cout<<"$$$$$$$$$$";
		}
		if(i!=5)
		cout<<"          ";
		cout<<"$";
		if(i==1||i==9){
			cout<<"$";
		}
			cout<<"\n";

	}
	
}
void i(){
	for(int i=1;i<10;i++){
		if(i==1){
			cout<<"$$$$$$$$$$$$";
		}
		
				if(i!=1&&i!=9)
		cout<<"     $$";
			if(i==9){
			cout<<"$$$$$$$$$$$$";
		}
			cout<<"\n";

	}
	
	
}
void j(){
	for(int i=1;i<10;i++){
		if(i==1){
			cout<<"$$$$$$$$$$";
		}
		if(i!=1&&i<6){

		cout<<"    ";
        cout<<"$";
		}	
        else{
					
	  for(int j=1;j<i-5;j++){
				cout<<" ";
			}

		cout<<"$";
		}
			cout<<"\n";

	}
	
}
int main(){
	a();
	cout<<"\n";
d();
	cout<<"\n";
c();
	cout<<"\n";
e();
	cout<<"\n";
f();
	cout<<"\n";
h();
	cout<<"\n";
i();
	return 0;
}
