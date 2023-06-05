#include <stdio.h>
#include <stdint.h>
#include <string.h>

class DongVat{
    private:
        const char *Ten;
        uint8_t Tuoi;
        double TrongLuong;
        double ChieuCao;
    public:
        DongVat(const char *Ten, uint8_t Tuoi, double TrongLuong, double ChieuCao);
        void SoSanh(DongVat dv);
        double BMI();
};

DongVat::DongVat(const char *Ten, uint8_t Tuoi, double TrongLuong, double ChieuCao){
    DongVat::Ten= Ten;
    DongVat::Tuoi= Tuoi;
    DongVat::TrongLuong= TrongLuong;
    DongVat::ChieuCao= ChieuCao;
}
void DongVat::SoSanh(DongVat dv){
    if(DongVat::TrongLuong> dv.TrongLuong)
    printf("Trong Luong %s > %s",DongVat::Ten,dv.Ten);
    else
    printf("Trong Luong %s < %s",DongVat::Ten,dv.Ten);
    if(DongVat::Tuoi> dv.Tuoi){
        printf("\nTuoi %s > %s",DongVat::Ten,dv.Ten);
    }
    else
    printf("\nTuoi %s < %s ", DongVat::Ten, dv.Ten);
}

double DongVat::BMI(){
    return (double)TrongLuong/(ChieuCao*ChieuCao);
}
int main(){
    DongVat a("MEO",10,3.14, 1.5);
    DongVat b("CHO",12,4.5,1.5);
    a.SoSanh(b);
    printf("\nChi so BMI: %f, %f", a.BMI(),b.BMI());
}