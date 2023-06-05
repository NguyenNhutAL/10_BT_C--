#include <stdio.h>
#include <stdint.h>

class BankAccount{
    private:
        const char *STK;
        const char *TenTK;
        int SoDu;
    public:
        BankAccount(const char *STK, const char *TenTK, int SoDu);
        void RutTien(int SoTienRut);
        void NapTien(int SoTienNap);
        void KiemTraSoDu();
        
};
BankAccount::BankAccount(const char *STK, const char *TenTK, int SoDu){
    BankAccount::STK=STK;
    BankAccount::TenTK=TenTK;
    BankAccount::SoDu=SoDu;
}
void BankAccount::RutTien(int SoTienRut){
    if(SoDu>SoTienRut){
        BankAccount::SoDu=BankAccount::SoDu- SoTienRut;
        printf("Giao dich rut tien thanh cong\n");
    }
    else
        printf("Tai khoan khong du de thuc hien giao dich\n");
}
void BankAccount::NapTien(int SoTienNap){
    BankAccount::SoDu=BankAccount::SoDu+ SoTienNap;
    printf("Giao dich nap tien thanh cong\n");
}
void BankAccount::KiemTraSoDu(){
    printf("So du tai khoan hien tai la: %d\n ",BankAccount::SoDu);
}
int main(){
BankAccount a("123456789", "Nguyen Minh Nhut", 87654321);
a.KiemTraSoDu();
a.NapTien(500000);
a.KiemTraSoDu();
a.RutTien(300000);
a.KiemTraSoDu();
}