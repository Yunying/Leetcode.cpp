class Solution {
public:
    int countPrimes(int n) {
if (n <= 2){
		return 0;
	}
	int count = n - 2;
	bool* mylist = new bool[n+1];
	mylist[0] = false;
	mylist[1] = false;
	for (int i = 2; i <= n; i++){
		mylist[i] = true;
	}
	for (int i = 2; i < n; i++){
		if (!mylist[i]){
			continue;
		}
		for (int j = 2; j <= n / i; j++){
			
			if (mylist[i*j] && i*j != n){
				mylist[i*j] = false;
				
				count--;
			}
			
		}
	}
	return count;
    }
};