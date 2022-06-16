#include <iostream>
using namespace std;

int main() {
	int N;
	int lucky=0;
	cin>>N;
	for(int i=0;i<N;i++){
	    int currentsoldiersweapons;
	    cin>>currentsoldiersweapons;
	    if(currentsoldiersweapons%2==0){
	        lucky++;
	    }
	}
	if(lucky>(N-lucky)){
	    cout<<"READY FOR BATTLE";
	}
	else{
	    cout<<"NOT READY";
	}
	
	return 0;
}
