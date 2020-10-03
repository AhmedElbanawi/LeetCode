bool isPowerOfTwo(int n){
    int Cnt = 0;
    while(n > 0){
        if(n & 1){
            Cnt++;
        }
        n >>= 1;
    }
    return 1 == Cnt ? true : false;
}
