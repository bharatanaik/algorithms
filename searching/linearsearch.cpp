#include<iostream>
#include<vector>

using namespace std;


int linearsearch(vector<int> array, int key){
	int n = array.size();
	for(int i=0; i<n; i++){
		cout << array[i] << endl;
		if(key == array[i]){
			return i;
		}
	}
	return -1;
}



int main(){
	vector<int> array;
	int n;

	cout << "Enter number of elements: ";
	cin >> n;
	cout << "Enter elements: ";
	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;
		array.push_back(temp);
	}
	cout << endl;
	cout << "Your elements are: ";
	
	for(int i=0; i<n; i++){
		cout << array[i] << " ";
	}
	cout << endl;
	
	cout << "Enter a key element to search: " ;
	int key;
	cin >> key;
	int res = linearsearch(array, key);
	if(res == -1){
		cout << "Key element not found" << endl;
	}
	else{
		cout << "Key element found at " << res << endl;
	}
	return 0;
}
