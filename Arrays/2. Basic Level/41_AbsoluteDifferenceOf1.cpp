class Solution{
  public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        vector<long long>r;
        
        for(int i=0; i<n; i++){
            if(arr[i]<k && (arr[i]%10)!=arr[i]){
                int temp = arr[i];
                bool flag = true;
                vector<int>digits;
                while(temp){
                    digits.push_back(temp%10);
                    temp /= 10; 
                }
                for(int j=0; j<digits.size()-1; j++)
                    if(abs(digits[j]-digits[j+1]) != 1){
                        flag = false;
                        break;
                    }
                if(flag == true)
                    r.push_back(arr[i]);
            }
        }
        return r;
    }
};