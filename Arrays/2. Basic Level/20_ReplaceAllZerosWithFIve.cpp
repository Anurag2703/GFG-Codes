int convertFive(int n) {
    int ans = 0;
    int t = n;
    int five = 5;
    while(t != 0){
        ans = t%10;
        if(ans == 0)
            n += five;
        
        five *= 10;
        t /= 10;
    }
    return n;
}