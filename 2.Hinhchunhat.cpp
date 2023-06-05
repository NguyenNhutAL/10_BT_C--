#include <stdio.h>
#include <stdint.h>
#include <math.h>

class Hinhchunhat{
    private: 
    int cdai;
    int crong;
    public:
    Hinhchunhat(int cdai, int crong){
         Hinhchunhat::cdai =cdai;
         Hinhchunhat::crong =crong;
    };
    int TinhChuVi();
    int TinhDienTich();
    int TinhDuongCheo();
    bool KiemTraHinhVuong();

};

int Hinhchunhat::TinhChuVi(){
    return (cdai +crong)*2;
}
int Hinhchunhat::TinhDienTich(){
    return (cdai*crong);
}
int Hinhchunhat::TinhDuongCheo(){
    return (float)sqrt(pow(cdai,2) +pow(crong,2));
}
bool Hinhchunhat::KiemTraHinhVuong(){
    if(cdai==crong){
    return true;}
    return false;
}
    int main(){
        Hinhchunhat cn(5,3);
        printf("chu vi: %d\n",cn.TinhChuVi());
        printf("dien tich: %d\n",cn.TinhDienTich());
        printf("Duong cheo: %f\n",cn.TinhDuongCheo());
        if(cn.KiemTraHinhVuong()==true)
        printf("La hinh vuong");
        else
        printf("Khong la hinh vuong");

    }