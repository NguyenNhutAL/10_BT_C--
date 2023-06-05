#include <stdio.h>
#include <math.h>

class Diem{
    private:
        int X;
        int Y;
    public:
        Diem(int X = 0, int Y = 0);
        int getX();
        int getY();
};

Diem::Diem(int x, int y){
    Diem::X = x;
    Diem::Y = y;
}

int Diem::getX(){
    return Diem::X;
}

int Diem::getY(){
    return Diem::Y;
}

class ThucHienPhepToan{
    private:
        Diem A;
        Diem B;
        Diem C;
    typedef enum{
        KHOANG_CACH,
        DIEN_TICH
    }PhepToan;

    PhepToan kiemTra;
    public:
        ThucHienPhepToan(Diem a, Diem b, Diem c);
        ThucHienPhepToan(Diem a, Diem b);
        void KhoangCachHaiDiem();
        void DienTichTamGiac();
};
ThucHienPhepToan::ThucHienPhepToan(Diem a, Diem b){
    ThucHienPhepToan::A= a;
    ThucHienPhepToan::B= b;
    kiemTra= KHOANG_CACH;
}

ThucHienPhepToan::ThucHienPhepToan(Diem a, Diem b, Diem c){
    ThucHienPhepToan::A= a;
    ThucHienPhepToan::B = b;
    ThucHienPhepToan::C = c;
    kiemTra= DIEN_TICH;
}
void ThucHienPhepToan::KhoangCachHaiDiem(){

    if(kiemTra== KHOANG_CACH){
    double kc = (double)sqrt( pow((A.getX() - B.getX()),2) + pow((A.getY() - B.getY()),2));
    printf("dien tich: %f",kc);}
    else
    printf("khong co chuc nang tinh khoang cach");
}

void ThucHienPhepToan::DienTichTamGiac(){
    if(kiemTra= DIEN_TICH){
        double dodaiAB, dodaiBC, dodaiCA;
        dodaiAB= (double)sqrt( pow((A.getX() - B.getX()),2) + pow((A.getY() - B.getY()),2));
        dodaiBC= (double)sqrt( pow((C.getX() - B.getX()),2) + pow((C.getY() - B.getY()),2));
        dodaiCA= (double)sqrt( pow((A.getX() - C.getX()),2) + pow((A.getY() - C.getY()),2));
        double p=(double)(dodaiAB + dodaiBC +dodaiCA)/2;
        printf("\nDien tich tam giac la: %f",(double)sqrt(p*(p-dodaiAB)*(p-dodaiBC)*(p-dodaiCA)));
    }
    else printf("\nkhong co chuc nang tinh dien tich");}
int main(){
    Diem a(3, 5);
    Diem b(6,7);
    Diem c(1,21);
    ThucHienPhepToan kc(a,b);
    kc.KhoangCachHaiDiem();
    ThucHienPhepToan dt(a,b,c);
    dt.DienTichTamGiac();
}