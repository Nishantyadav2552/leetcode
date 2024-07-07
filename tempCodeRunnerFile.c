int reverse(long long int x){
    int sign = 1;
    if(x < 0){
        sign = -1;
        x *= -1;
    }
    int i =0;
    int arr[MAX];
    while (x!=0)
    {
        int val = x%10;
        arr[i]=val;
        x = x/10;
        i++;
    }
    long long int r =0;
    for (int j = 0; j < i; j++)
    {
        r = r*10 + arr[j];
    }
    return r*sign; 
}