int maxEleBitonic(ArrayWrap<int> &aw){
    int n=aw.getLength(),first=0,end=n-1,mid;
	bool a,b;

	if(aw[0]>aw[1]&&aw[n-2]>aw[n-1])
		return aw[0];
	if(aw[0]<aw[1]&&aw[n-2]<aw[n-1])
		return aw[n-1];

	while(first<end){
		mid=(first+end)/2;
		a=aw[mid-1]>aw[mid];
		b=aw[mid]>aw[mid+1];
		if(a&&b)
			end=mid-1;
		else if(!a&&!b)
			first=mid+1;
		else 
			return aw[mid];
	}
	return aw[first];
}