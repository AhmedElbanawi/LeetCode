typedef unsigned int u32;
int findComplement(int num){
    u32 x = num, sum = 0;
    short j = 31, f = 1;
    while(j > -1){
        if(f){
            if(x & ((u32)1 << 31)){
                f = 0;
                j++;
            }else{  x <<= 1; }
        }else{
            sum += ((u32)1 << j) * ((x & ((u32)1 << 31)) ? 0 : 1);
            x <<= 1;
        }
        j--;
    }
    return sum;
}
