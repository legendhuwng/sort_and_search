//tim kiem tuyen tinh
int LinearSearch(int a[], int n, int x)
{	
	int i=0;
	while(i<n && a[i]!=x)  i++;
	if (i<n)	return i; 	// a[i] là phần tử có khoá x
	return -1; 	// tìm hết mảng nhưng không có x
}

// cai tien dung phuong phap linh canh
int LinearSearch(int a[], int n, int x)
{	
	int i=0;
	// mảng gồm N phần tử từ a[0]..a[N-1]
	a[n] = x;	// thêm lính canh vào cuối dãy
	while(a[i]!=x) i++;
	if (i<n)	 return i; // a[i] là phần tử có khoá x
	return -1; 	// tìm hết mảng nhưng không có x
}


//tim kiem nhi phan
int BinarySearch(int a[],int n,int x )
{ 
	int  left =0, right = n-1, mid;
	while (left <= right)	
	{	
		mid = (left + right)/2;
		if (x == a[mid])  return m;//Tìm thấy x tại mid
		if (x<a[mid])  r = mid -1;
		else           l  = mid +1;
	}
	return -1; // trong dãy không có x
}

// su dung ham hoan vi
void Swap( int &a , int &b )
	{
		int  temp = a;
			  a = b;
			  b = temp;	
	}

// doi cho truc tiep interchange sort
void InterchangeSort(int a[], int n)
{	
	int  i, j;
	for (i = 0 ; i<n-1 ; i++)
		for (j =i+1; j < n ; j++)
		   if(a[j]< a[i])   //nếu có nghịch thế thì đổi chỗ
			Swap(a[i],a[j]);
}

// chon truc tiep selection sort
void SelectionSort(int a[],int n )
{
	int min; // chỉ số phần tử nhỏ nhất trong dãy hiện hành
	for (int  i=0; i<n-1 ; i++)
	{  
		min = i; 
		for(int j = i+1; j < n ; j++)
	   	   if (a[j] < a[min])
		   	min = j; // ghi nhận vị trí phần tử nhỏ nhất
		if (min != i)
	   	   Swap(a[min], a[i]);
	}
}

// chen truc tiep insertion sort
void InsertionSort(int a[], int n )
{	int pos, x;
	for(int i=0 ; i<n ; i++) //đoạn a[0] đã sắp
	{	x = a[i+1];pos=	i;
		while(pos>=0 && a[pos]>x)
		{	a[pos+1] = a[pos];
			pos--;
		}
		a[pos]=x;
	}
}

//phuong phap noi bot buble sort
void BubbleSort(int a[], int n)
{	
	int i, j;
	for (i = 0 ; i<n-1 ; i++)
		for (j =n-1; j>i ; j --)
		   if(a[j]< a[j-1])						 
		   	Swap(a[j], a[j-1]);
}

//sap xep dua tren phan hach quick sort
void QuickSort(int a[], int left, int right)
{ 	
	int	i, j, x;
	if (left  right)	return;
  	x = a[(left+right)/2]; // chọn phần tử giữa làm giá trị mốc
  	i = left; j = right;
  	 do{
     	while(a[i] < x) i++;
     	while(a[j] > x) j--;
     	if(i <= j) { 
			Swap(a[i], a[j]);
       	i++ ; j--;
	 	}
	} while(i < j) ;
	if(left<j) QuickSort(a, left, j);
	if(i<right) QuickSort(a, i, right);
}


