#include <iostream>
#include<string>
using namespace std;

class Studikasus{
  public:
    
    void Input(){
      cout<<"Masukkan jumlah data : ";
      cin>>bnyk_data;
      for(int i=0;i<bnyk_data; i++){
        cout<<"Masukkan Nama : ";
        cin>>nama[i];
        cout<<"Masukkan NIM : ";
        cin>>nim[i];
      }
    }
    void  carinim(){
      cout<<"CARI NIM"<<endl;
      cout<<"masukkan nim : ";
      cin>>cari_nim;
    }
    //sorting
    void sort(){
      int tempnim;
      string tempnama;
  		for(int i=0;i<bnyk_data-1;i++){
  			for(int j=0;j<bnyk_data-1;j++){
  				if(nim[j]>nim[j+1]){
  					tempnim=nim[j];
  					nim[j]=nim[j+1];
  					nim[j+1]=tempnim;
            tempnama=nama[j];
            nama[j]=nama[j+1];
            nama[j+1]=tempnama;
  				}	
  			}
  		}
    }
    //search
    int search_nim(){
      for(int i=0;i<bnyk_data;i++){
        if(nim[i] == cari_nim){
          return i;
        }
      }
      return -1;
    }
    
      
    

  private:
  int cari_nim;
  int nim[50];
  string nama[50];
  int bnyk_data;
};
int main() {
  Studikasus run;
  run.Input();
  run.sort();
  run.SetelahUrut();
  run.carinim();
  run.output_cari_nim();
  
  
}

