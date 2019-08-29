#include <bits/stdc++.h>

int main(){

	int caso,insertar,contador;
	while(std::cin>>caso){
		int arr[caso];
		contador=0;
		for(int i=0;i<caso;i++){
			std::cin>>arr[i];
		}
		for(int i=0;i<caso;i++){
			for(int j=0;j<caso-i-1;j++){
				if(arr[j]>arr[j+1]){
					std::swap(arr[j],arr[j+1]);
					contador++;
				}
			}
		}
		std::cout<<"Minimum exchange operations : "<<contador<<std::endl;
	}

	return 0;
}