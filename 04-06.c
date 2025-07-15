#include <stdio.h>

const int GLOBAL_RATE = 10; // Global constant

void calculate() {
    const int LOCAL_BONUS = 50; // Local constant

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    // Try to print >> LOCAL_BONUS in main >> Discuss the result
    // printf("LOCAL_BONUS = %d\n", LOCAL_BONUS); // This line is commented out

    return 0;
}

/*
    GLOBAL_RATE เป็นตัวแปรคงที่ที่ประกาศนอกฟังก์ชัน สามารถเข้าถึงได้จากทุกที่ในโปรแกรม
    LOCAL_BONUS เป็นตัวแปรคงที่ที่ประกาศภายในฟังก์ชัน calculate() เท่านั้น ไม่สามารถเข้าถึงได้จาก main()

    การใช้ตัวแปรคงที่ช่วยให้โค้ดมีความชัดเจนและไม่เปลี่ยนแปลงค่าโดยไม่ได้ตั้งใจ
*/

/*
    GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80;
    จะเกิด compile-time error เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนค่าได้หลังจากประกาศแล้ว
*/

/*
    การประกาศตัวแปรคงที่ (constant) ช่วยให้โค้ดมีความชัดเจนและไม่เปลี่ยนแปลงค่าโดยไม่ได้ตั้งใจ
    GLOBAL_RATE เป็นตัวแปรคงที่ที่สามารถเข้าถึงได้จากทุกฟังก์ชัน
    LOCAL_BONUS เป็นตัวแปรคงที่ที่ใช้เฉพาะภายในฟังก์ชัน calculate() เท่านั้น
    การพยายามเข้าถึง LOCAL_BONUS ใน main() จะทำให้เกิดข้อผิดพลาด เนื่องจากมันอยู่นอกขอบเขตการเข้าถึง
*/

/*
    ค่าคงที่ที่ประกาศแบบ global ใช้งานได้จากหลายฟังก์ชัน
    ค่าคงที่แบบ local ใช้งานได้เฉพาะใน scope ที่มันถูกประกาศ
    การพยายามเปลี่ยนค่าคงที่หรือเข้าถึงค่าคงที่นอก scope จะทำให้เกิด error
*/