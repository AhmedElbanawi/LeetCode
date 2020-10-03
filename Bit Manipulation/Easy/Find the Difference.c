char findTheDifference(char * s, char * t){
    char x = 0;
    unsigned short i = 0;
    while(s[i] != '\0'){
        x ^= s[i] ^ t[i];
        i++;
    }
    x ^= t[i];
    return x;

}
