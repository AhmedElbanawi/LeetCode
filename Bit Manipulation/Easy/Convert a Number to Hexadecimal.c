char * toHex(int num){
    static char hex[9];
    hex[8] = '\0';
    unsigned short i = 8, j = 0, sum, k = 7;
    if(0 == num){
        hex[0] = '0';
        hex[1] = '\0';
        return hex;
    }
    while(i--){
          sum = 0;
          for(j = 0; j < 4; j++){
              sum += (1 << j) * (1 & num);
              num >>= 1;
          }
          if(sum > 9){
              hex[k] = 'a' + sum % 10;
          }else{
              hex[k] = sum + '0';
          }
          k--;
      }
    i = 0;
    while('0' == hex[i]){ i++; }
    return i + hex;

}
