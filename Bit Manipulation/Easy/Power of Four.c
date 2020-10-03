bool isPowerOfFour(int num){
    int f = 1, cnt = 0;
    while(num > 0){
        if(f){
            if(num & 1){ 
              cnt++;
              if(cnt > 1){ break; }  
            } 
            f = 0;
        }else{
            if(num & 1){
                cnt = 0;
                break;
            }
            f = 1;
        }
        num >>= 1;
    }
    return 1 == cnt ? true : false;
}
