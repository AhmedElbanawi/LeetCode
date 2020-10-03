uint32_t reverseBits(uint32_t n) {
    uint32_t r = 0, x = 32;
   while(x--){
        r = (r << 1) | (n & 1);
        n >>= 1;
   }
    return r;
}
