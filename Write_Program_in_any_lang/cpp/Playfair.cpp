#include<iostream>
using namespace std;

void encrypt(char a , char b, string keygen[],string &output){

    for(int i=0;i<5;i++){
      int fst_chr_row=-1,d;
        for(int j=0;j<5;j++){

            if(keygen[i][j]==a){
                d = j;
                fst_chr_row =i;
            }
        }
        for(int j=0;j<5;j++){
            if(keygen[i][j]==b && i==fst_chr_row){
                output+=keygen[i][(d+1)%5];
                output+=keygen[i][(j+1)%5];
                //cout<<"hello"<<endl;
                return;
            }
        }
    }

    for(int j=0;j<5;j++){
        int fst_chr_col=-1, d;
        for(int i=0;i<5;i++){

            if(keygen[i][j]==a){
                d=i;
                fst_chr_col=j;
            }
        }
        for(int i=0; i<5;i++){
            if(keygen[i][j]==b && j==fst_chr_col){
                output+=keygen[(d+1)%5][j];
                output+=keygen[(i+1)%5][j];

                //cout<<output;
                return;

            }
        }
    }

    int fst_char_col , fst_char_row, scnd_char_col, scnd_char_row;
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){
            if(keygen[i][j]==a){
                fst_char_row=i;

                fst_char_col=j;
            }
            else if(keygen[i][j]==b){
                scnd_char_row=i;
                scnd_char_col=j;
            }
        }
    }

    output+=keygen[fst_char_row][scnd_char_col];
    output+=keygen[scnd_char_row][fst_char_col];
    return;
    //cout<<output;
}
void decrypt(char a , char b, string keygen[],string &output){

    for(int i=0;i<5;i++){
      int fst_chr_row=-1,d;
        for(int j=0;j<5;j++){

            if(keygen[i][j]==a){
                d = j;
                fst_chr_row =i;

            }
        }
        for(int j=0;j<5;j++){
            if(keygen[i][j]==b && i==fst_chr_row){
                //cout<<"Hello"<<endl;
                int count_d=0;
                int count_i =0;
                if(d-1<0){
                    count_d = 5;
                }
                if(j-1<0){
                    count_i=5;
                }
                //cout<<"hello"<<endl;
                //cout<<d;
                output+=keygen[i][(count_d+d-1)%5];
                output+=keygen[i][(count_i+j-1)%5];
                //cout<<"hello"<<endl;
                return;
            }
        }
    }

    for(int j=0;j<5;j++){
        int fst_chr_col=-1, d;
        for(int i=0;i<5;i++){

            if(keygen[i][j]==a){
                d=i;
                fst_chr_col=j;
            }
        }
        for(int i=0;i<5;i++){
            if(keygen[i][j]==b && j==fst_chr_col){
                int count_d=0;
                int count_i =0;
                if(d-1<0){
                    count_d = 5;
                }
                if(i-1<0){
                    count_i=5;
                }
                output+=keygen[(count_d+d-1)%5][j];
                output+=keygen[(count_i+i-1)%5][j];

                //cout<<output;
                return;

            }
        }
    }
    int fst_char_col , fst_char_row, scnd_char_col, scnd_char_row;
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){
            if(keygen[i][j]==a){
                fst_char_row=i;

                fst_char_col=j;
            }
            else if(keygen[i][j]==b){
                scnd_char_row=i;
                scnd_char_col=j;
            }
        }
    }

    output+=keygen[fst_char_row][scnd_char_col];
    output+=keygen[scnd_char_row][fst_char_col];
    return;
    //cout<<output;
}

int main(){

    string p ="abcdefghiklmnopqrstuvwxyz";
    string key;
    cout<<"Enter the Key : ";
    cin>>key;
    int n=key.size();

    // Generation of Keygen :
    string key_gen[5];
    int val=0;
    int con_row = n/5;
    int con_col = n%5;
    for(int i=0;i<=con_row;i++){
        for(int j=0;j<5;j++){
            key_gen[i]+=key[val];
            val++;
            if(val==n){
                break;
                }
            }
        }
    /*for(int i=0;i<n;i++){
        cout<<key_gen[i]<<endl;
    }*/
    string non_key;
    for(int i=0;i<p.size();i++){
        bool flag =true;
        for(int j=0;j<n;j++){
            if(p[i]==key[j]){
                flag=false;
            }
        }
        if(flag){
            non_key+=p[i];
        }
    }
    int non_key_val=0;
    int i=con_row;
    for(;i<5;i++){
        int j;
        if(i>con_row){
            j=0;
        }
        else{
            j=con_col;
        }
        for(;j<5;j++){
            key_gen[i]+=non_key[non_key_val];
            non_key_val++;
        }
    }
    /*for(int i=0;i<5;i++){
        cout<<key_gen[i]<<endl;
    }*/
    string pln_txt;
    cout<<"Enter the Text : ";
    cin>>pln_txt;

    int diphr_size = pln_txt.size();
    if(diphr_size%2==1){
        pln_txt+='z';
        diphr_size+=1;
    }
    int choice;
    cout<<"Enter 1 for Encryption , 2 for Decryption : "<<endl;
    cin>>choice;

    string cypher;

    if(choice==1){
    for(int i=0;i<diphr_size;i+=2){
    encrypt(pln_txt[i],pln_txt[i+1],key_gen,cypher);
    }
    cout<<"Encrypted Text : "<<cypher;
    }

    else if(choice==2){
        for(int i=0;i<diphr_size;i+=2){
        decrypt(pln_txt[i],pln_txt[i+1],key_gen,cypher);
    }
    cout<<"Decrypted Text : "<<cypher;
    }
}
