#include <iostream>
#include<string>
using namespace std;

class Studikasus{
  public:
    
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
    
    //output
        void SetelahUrut(){
      cout << "Data setelah diurutkan : "<< endl;
      for (int i=0; i<bnyk_data; i++ ){
        cout << nim[i] <<"   "<< nama[i]<<endl;
      }
    }

    void output_cari_nim(){
      int index=search_nim();
      if(index==-1){
        cout<<"data tidak ditemukan";
      }
      else{
        cout<<"Nama = "<<nama[index]<<endl;
        cout<<"Nim = "<<nim[index];
      }
      
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

