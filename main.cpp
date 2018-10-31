#include <iostream>
#include <string>
#include "CCfunc.h"

using namespace std;
int main(){

const int alph_a = 97;
const int alph_z = 122;
string inpstr = GetStrr();
int key = GetKey();
int lenght = GetLenght(inpstr);
char enc_arr[lenght];
for(int i = 0;i<lenght;i++){
    char ch = inpstr[i];
    if(isupper(ch)){
        ch = tolower(ch);
    }
    if(ch>=alph_a&&ch<=alph_z){
        int ind_x = (int)ch - 97;
        int enc_x = (ind_x+key)%26+97;
        enc_arr[i]=enc_x;
    }else{
    cout<<"wrong characters";
    break;
    }
}

cout<<"Your encrypted message is: \r\n";
    for(int i = 0;i<lenght;i++){
        cout<<enc_arr[i];
        }

cout<<"\r\nNow is time for decryption !\r\n\r\n";
inpstr = GetStrr();
key = GetKey();
lenght = GetLenght(inpstr);
char dec_arr[lenght];
for(int i = 0;i<lenght;i++){
    char ch = inpstr[i];
    if(isupper(ch)){
        ch = tolower(ch);
    }
    if(ch>=alph_a&&ch<=alph_z){
        int ind_x = (int)ch-97;
        int dec_x;
        if(ind_x-key>=0){
            dec_x=ind_x-key;
            dec_x+=97;
        }else{
            dec_x = (ind_x-key)%26;
            if(dec_x == 0){
                dec_x=0;
            }else{
            dec_x = 26+dec_x;
            }
            dec_x+=97;
        }
        cout<<(char)dec_x;
    }else{cout<<"Wrong Message";}
}

return 0;
}
