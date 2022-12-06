class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        int i,min1=10001,min2=10001,d,loc;
        for(i=0;i<n;i++){
            if(min1>arr[i]){
                min1=arr[i];
                loc=i;
            }
        }
        for(i=0;i<n;i++){
            if(i!=loc&&arr[i]>=min1&&min2>arr[i]){
                min2=arr[i];
            }
        }
        //cout<<min1<<" "<<min2;
        d=min2-min1;
        for(i=0;i<n;i++){
            if(d!=0&&((arr[i]-min1)%d)!=0){
                return false;
            }
            else if(d==0&&(arr[i]-min1)!=0){
                return false;
            }
        }
        return true;
    }
};
