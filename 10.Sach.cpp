#include <stdio.h>
#include <stdint.h>

class Sach{
    private:
        const char *TenSach;
        const char *TacGia;
        uint16_t NamXuatBan;
        uint8_t SoLuong;
    public:
        Sach(const char *TenSach, const char *TacGia, uint16_t NamXuatBan, uint8_t SoLuong);
        void InThongTin();
        void MuonSach(const char *Tensachmuon);
        void TraSach();

};
Sach::Sach(const char *TenSach, const char *TacGia, uint16_t NamXuatBan, uint8_t SoLuong){
    Sach::TenSach= TenSach;
    Sach::TacGia=TacGia;
    Sach::NamXuatBan= NamXuatBan;
    Sach::SoLuong=SoLuong;
}
void Sach::InThongTin(){
    printf("Ten Sach: %s\n Tac Gia: %s\nNam xuat ban: %d\nSo luong: %d\n",Sach::TenSach,Sach::TacGia,Sach::NamXuatBan,Sach::SoLuong);
}
void Sach::MuonSach(const char *Tensachmuon){
    if(Tensachmuon==Sach::TenSach && Sach::SoLuong>0){
        Sach::SoLuong--;
        printf("Da muon thanh cong\n");
    }
    else
    printf("Khong co sach can muon hoac sach da het\n");

}
void Sach::TraSach(){
    Sach::SoLuong++;
    printf("Tra sach thanh cong\n");
}
int main(){
    Sach a("abc", "Nguyen Minh Nhut", 2023, 2);
    a.InThongTin();
    a.MuonSach("abc");
    a.InThongTin();
}