#include <stdio.h>
#include <stdint.h>

uint16_t TimBCNN(uint16_t TS, uint16_t MS){
    uint16_t BCNN;
    uint16_t min;
    if(TS > MS) min= MS;
    else        min= TS;
    for(uint16_t i= min; i<= TS*MS; i++){
        if((i%MS==0) && (i%TS==0)){
            BCNN= i;
            break;
        }
    }
    return BCNN;
}

class PhanSo{
    private: 
    uint16_t TuSo;
    uint16_t MauSo;
    public:
        PhanSo(uint16_t TuSo, uint16_t MauSo);
        void Cong_Tru_HaiPhanSo(PhanSo a);
        void Nhan_Chia_HaiPhanSo(PhanSo a);
};
PhanSo::PhanSo(uint16_t TuSo, uint16_t MauSo){
    PhanSo::TuSo=TuSo;
    PhanSo::MauSo=MauSo;
}
void PhanSo::Cong_Tru_HaiPhanSo(PhanSo a){
    uint16_t TongMauSo, TongTuSo;
    int16_t HieuTuSo;
    uint16_t BCNN= TimBCNN(MauSo, a.MauSo);
    //UCLN= MauSo*(a.MauSo) /BCNN;
    TongMauSo= BCNN;
    TongTuSo= BCNN/MauSo*TuSo + BCNN/a.MauSo*a.TuSo;
    HieuTuSo= BCNN/MauSo*TuSo - BCNN/a.MauSo*a.TuSo;
    printf("Tong cua 2 phan so la %d / %d \n",TongTuSo, TongMauSo);
    printf("Hieu cua 2 phan so la %d / %d \n",HieuTuSo, TongMauSo);

}

void PhanSo::Nhan_Chia_HaiPhanSo(PhanSo a){
    uint16_t TichTuSo, TichMauSo;
    uint16_t ThuongMauSo, ThuongTuSo;
    TichTuSo= TuSo * a.TuSo;
    TichMauSo= MauSo *a.MauSo;
    ThuongTuSo= TuSo * a.MauSo;
    ThuongMauSo= MauSo* a.TuSo;
    uint16_t BCNN_Tich= TimBCNN(TichTuSo, TichMauSo);
    uint16_t UCLN_Tich= TichMauSo*TichTuSo /BCNN_Tich;
    TichMauSo= TichMauSo/UCLN_Tich;
    TichTuSo= TichTuSo/UCLN_Tich;
    printf("Tich cua hai phan so la %d / %d\n",TichMauSo,TichTuSo );
    uint16_t BCNN_Thuong= TimBCNN(ThuongTuSo, ThuongMauSo);
    uint16_t UCLN_Thuong= ThuongMauSo*ThuongTuSo /BCNN_Thuong;
    ThuongMauSo= ThuongMauSo/UCLN_Thuong;
    ThuongTuSo= ThuongTuSo/UCLN_Thuong;
    printf("Thuong cua hai phan so la %d / %d",ThuongMauSo,ThuongTuSo );


}


int main(){
    PhanSo a(5,9);
    PhanSo b(7,12);
    a.Cong_Tru_HaiPhanSo(b);
    a.Nhan_Chia_HaiPhanSo(b);


}
