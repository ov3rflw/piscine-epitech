void my_revstr(char * value){
    
    int i = mystrlen(value);
    int j = 0;
    
    for(; j < mystrlen(value); j++){
        for(; i > j; i--){
            printf("%c", value[i-1]);
        }
    }
}
