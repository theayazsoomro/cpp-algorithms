#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x);

int main()
{
    int arr[] = {33,11,66,34,76,88,90,10,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\nEnter Any Number From Above ";
    cin >> x;
    linearSearch(arr, n, x);
    return 0;
}

int linearSearch(int arr[], int n, int x)
{
	int val = -1;
    for(int i = 0; i < n; i++)
	{
        if(arr[i] == x)
    	{
    		val = arr[i];
            cout << "Element " << x << " Found at Index "  << i << " ";
    	}
    	
    }
    
    if(val == -1)
	{
		cout << "Element Not Found ";
	}
    
    return 0;
}