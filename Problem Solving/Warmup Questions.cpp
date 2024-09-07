//Warmup Questions in cpp

//1.Solve me first
int main() {
    int a;
    cin>> a;
    int b;
    cin>> b;
    cout<<a+b; 
    return 0;
}
//2.Simple array sum
int simpleArraySum(vector<int> ar, int n) {
    int sum=0;
    for(int i=0; i<n; ++i){
        sum+=ar[i];
    }
    return sum;
}
//3.Compare the triplets
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    for(int i=0; i<a.size(); i++){
        if(a[i]>b[i]){
            c1+=1;
        }else if(a[i]==b[i]){
            c1+=0;
            c2+=0;
        }
        else{
            c2+=1;
        }
    }
    vector<int> score={c1,c2};
    return score;
}
//4.A very big sum
long long sum=0;
long aVeryBigSum(vector<long> ar) {
    for(int i=0; i<ar.size();i++){
        sum+=ar[i];
    }
    return sum;
}
//5.Plus Minus
oid plusMinus(vector<int> arr) {
    for(int i=0; i<arr.size();i++){
        if(arr[i]<0){
            c+=1;
        }else if(arr[i]>0){
            d+=1;
        }else{
            f+=1;
        }
    }
    vector<int> num={d,c,f};
    for(int i=0; i<num.size();i++){
        float a=float(num[i])/float(arr.size());
        cout<<setprecision(6)<<a<<endl;
    }
}
//6.Staircase
void staircase(int n) {
    for(int i=1; i<=n;i++){
        if(i!=n){
            cout<<string(n-i, ' ');
        }
        for(int j=1;j<=i;j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
//7.Min-max Sum
int partitionIndex(vector<int> &arr, int low, int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int Pindex=partitionIndex(arr, low, high);
        qs(arr, low, Pindex-1);
        qs(arr, Pindex+1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    qs(arr, 0, arr.size()-1);
    return arr;
}
void miniMaxSum(vector<int> arr) {
    arr = quickSort(arr);
    long long sum1=0;
    long long sum2=0;
    for(int i=0; i<arr.size()-1;i++){
        sum1+=arr[i];
    }
    for(int i=1; i<arr.size();i++){
        sum2+=arr[i];
    }
    cout<<sum1<<" "<<sum2;
}
//8.Birthday cake candles
int birthdayCakeCandles(vector<int> candles) {
    int largest=candles[0];
    for(int i=1; i<candles.size(); i++){
        if(candles[i]>largest){
            largest=candles[i];
        }
    }
    int c=0;
    for(int i=0; i<candles.size();i++){
        if(candles[i]==largest){
            c+=1;
        }
    }
    return c;
}
//9.Diagonal Difference
int c=0;
int d=0;
int j=0;
int diagonalDifference(vector<vector<int>> arr) {
    int f=arr[0].size()-1;
    for(int i=0; i<arr.size();i++){
        c+=arr[i][j];
        j++;
        d+=arr[i][f];
        f--;
    }
    return abs(c-d);
}
//10.Time Conversion
string timeConversion(string s) {
    string hour = s.substr(0, 2);
    string rest = s.substr(2, 6);
    string period = s.substr(8, 2);

    if (period == "PM") {
        if (hour != "12") {
            int hourInt = stoi(hour) + 12;
            hour = to_string(hourInt);
        }
    } else {
        if (hour == "12") {
            hour = "00";
        }
    }

    return hour + rest;
}
