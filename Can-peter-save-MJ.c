#include <stdio.h>

int main() {
	
	int n,k;
	scanf("%d %d ",&n,&k);
	
	int arr[n];
	
	for(int i = 0; i < n; ++i)
	    scanf("%d ",&arr[i]);
	
	long long sum = 0;
	
	int mxx = -1;
	int src = -1;
	
	for(int i = 0; i < n; ++i) {
		if(arr[i] >= mxx) {
			mxx = arr[i];
			src = i;
		}
	}
	
	sum += mxx;
	
	mxx = -1;
	
	for(int i = 0; i < n; ++i) {
		if(arr[i] >= mxx && src!=i) {
			mxx = arr[i];
			//src = i;
		}
	}
	
	sum += mxx;
	
	if(sum >= k) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}