int missingAPterm(ArrayWrap<int> &aw){
    int n=aw.getLength();
    int dis=(aw[n-1]-aw[0])/n;
	//cout<<dis;
	int first=0;
	int end=n-1;
	int mid;
	while(first+1<end){
		mid=(first+end)/2;
		//cout<<mid;
		if(aw[mid]!=mid*dis+aw[0])
			end=mid;
	    else
			first=mid;
		//cout<<first<<endl;
	}
	return aw[first]+dis;
}