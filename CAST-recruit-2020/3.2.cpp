void swap(int &a, int &b){
	int t=a;
	a=b;
	b=t;
}

void qs(int &a[], int l, int r){
	int h=l, t=r;
	int mid=(h+r)/2;
	while(h<t){
		while(a[h]<=a[mid])
			h++;
		while(a[t]>=a[mid])
			t--;
		if(h<=t){
			swap(a[h],a[t]);
			h++;
			t--;
		}
	}
	if(l<mid) qs(a,l,mid);
	if(r>mid) qs(a,mid,r);
}