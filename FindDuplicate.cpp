/*brute force
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	sort(ar,ar+n);
	for(int i=0;i<n;i++){
		if(ar[i]==ar[i+1]){
			cout<<ar[i];
			break;
		}
	}
}*/

//optimal linedlist cycle method
int findDuplicate(vector<int>& nums){
	int slow=nums[0];
	int fast=nums[0];
	do{
		slow=nums[slow];
		fast=nums[nums[fast]];
	}while(slow!=fast);
	
	fast=nums[0];
	while(slow!=fast){
		slow=nums[slow];
		fast=nums[fast];
	}
	return slow;
}
