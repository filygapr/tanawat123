#include <stdio.h>              // ดึง library พื้นฐาน stdio มาใช้สำหรับรับเเละส่งออกข้อมูล

int main() {                    // สร้าง Function main ที่ต้องมีการ Return ตัวเลขกลับ
    char* name = "Boook";       // ประกาศตัวแปรชนิดตัวอักษร (string) ชื่อ name และกำหนดค่าเริ่มต้นเป็น "Boook"
    int age = 23;               // ประกาศตัวแปรชนิดจำนวนเต็ม (integer) ชื่อ age และกำหนดค่าเริ่มต้นเป็น 23 
    float weight = 100.00;      // ประกาศตัวแปรชนิดจำนวนจริง (float) ชื่อ weight และกำหนดค่าเริ่มต้นเป็น 100.00
    char* gender = "man";       // ประกาศตัวแปรชนิดตัวอักษร (string) ชื่อ gender และกำหนดค่าเริ่มต้นเป็น "man"

    printf("Name: %s\n", name);         // แสดงผลค่าของตัวแปร name
    printf("Age: %d\n", age);           // แสดงผลค่าของตัวแปร age
    printf("Weight: %.2f\n", weight);   // แสดงผลค่าของตัวแปร weight โดยมีทศนิยม 2 ตำแหน่ง
    printf("gender: %s\n", gender);       // แสดงผลค่าของตัวแปร gender 

    return 0;                   // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}