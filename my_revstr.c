void my_revstr(const char * value){
    
    int i = mystrlen(value);
    int j = 0;
    
    for(; j < mystrlen(value); j++){
        for(; i > j; i--){ //reverse
            printf("%c", value[i-1]);
        }
    }
}
