#include <stdio.h>
#include <stdint.h>

class HinhTron{
    private:
        double BanKinh;
    public:
        HinhTron(double BK);
        double ChuViHinhTron();
        double DienTichHinhTron();

};
HinhTron::HinhTron(double BK){
    HinhTron::BanKinh=BK;
}
double HinhTron::ChuViHinhTron(){
    return 2*BanKinh*3.14;
}
double HinhTron::DienTichHinhTron(){
    return BanKinh*BanKinh*3.14;
}
int main(){
    HinhTron HT(3);
    printf("Chu vi hinh tron la: %f",HT.ChuViHinhTron());
    printf("\nDien tich hinh tron la: %f",HT.DienTichHinhTron());
    return 0;
}