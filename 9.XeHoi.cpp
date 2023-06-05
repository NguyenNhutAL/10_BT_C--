#include <stdio.h>
#include <stdint.h>
class XeHoi{
    private:
    const char *MauSac;
    const char *Kieudongco;
    int SoKm;
    public:
        XeHoi(const char *MauSac, const char *Kieudongco, int SoKm );
        int TinhChiPhiBaoTri();
        void InThongTin();
};
XeHoi::XeHoi(const char *MauSac, const char *Kieudongco, int SoKm ){
    XeHoi::MauSac= MauSac;
    XeHoi::Kieudongco=Kieudongco;
    XeHoi::SoKm=SoKm;
}
int XeHoi::TinhChiPhiBaoTri(){

}
void XeHoi::InThongTin(){
    printf("Xe kieu: %s \n Mau sac: %s \n So Kilomet: %d",XeHoi::Kieudongco, XeHoi::MauSac,XeHoi::SoKm);
}
int main(){
    XeHoi toyota("Black","....",12356798);
    toyota.InThongTin();
}