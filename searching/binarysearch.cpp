#include<iostream>
#include<vector>


using namespace std;

int binarysearch(vector<int> array, int key){
	int n = array.size();
	
	int low = 0;
	int high = n-1;
	
	while(low <= high){
		int mid = (low+high) / 2;
		if(array[mid] == key){
			return mid;
		}
		else if(array[mid] > key){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return -1;
}


int main(){
	cout << "## BINARY SEARCH ##" << endl;
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
	
	cout << "Enter a key element to search: " ;
	int key;
	cin >> key;
	int res = binarysearch(array, key);
	if(res == -1){
		cout << "Key element not found" << endl;
	}
	else{
		cout << "Key element found at " << res << endl;
	}
	return 0;
}

