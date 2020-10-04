int numberOfSteps (int num){
    int ones = 0, s = 0;
    while(num){
        if(1 & num){ ones++; }
        num >>= 1;
        s++;
    }
    if(s > 0){
        s--;
    }
    return ones + s;
}
