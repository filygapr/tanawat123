// static
#include <stdio.h>

void countCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();       
    printf("After first call:\n");
    countCall();          
    return 0;
}

/*
    ค่า counter เพิ่มขึ้นทุกครั้งที่เรียกฟังก์ชัน เพราะ static จำค่าครั้งก่อน
*/

/*
    ความแตกต่างของ Non-Static Variable
    Non-static (local variable):
        สร้างใหม่ทุกครั้งเมื่อเข้า function
        ค่าไม่คงอยู่หลังออกจาก function
*/

/*
    การใช้ static มีประโยชน์เมื่อต้องการให้ตัวแปรในฟังก์ชันเก็บค่าคงเดิม เช่นนับจำนวนครั้งที่เรียก
    การใช้ non-static เหมาะกับค่าที่ต้องการใช้งานชั่วคราวในฟังก์ชัน
*/