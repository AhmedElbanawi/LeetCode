int hammingWeight(uint32_t n) {
    int Cnt = 0;
    while(n){
        if(n & 1){ Cnt++; }
        n >>= 1;
    }
    return Cnt;
    
}