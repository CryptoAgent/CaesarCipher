#ifndef CCfunc
#define CCfunc


std::string GetStrr(){
    std::cout<<"Please enter your message \r\n";
    std::string sttr;
    std::cin>>sttr;
    return sttr;
}

int GetKey(){
    std::cout<<"Now enter your key\r\n";
    int i;
    std::cin>>i;
    return i;
}

int GetLenght(std::string str){
    int lenn;
    for(int i = 0;str[i]!='\0';i++){
        lenn++;
    }
    return lenn;
}

#endif
