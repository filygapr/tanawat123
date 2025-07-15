#include <stdio.h> // ดึง library พื้นฐาน stdio มาใช้สำหรับรับเเละส่งออกข้อมูล

int main(){ // สร้าง Function main ที่ต้องมีการ Return ตัวเลขกลับ
  int a = 10; // ประกาศตัวแปร a ชนิดตัวเลข ที่กำหนดค่า 10
  printf("a = %d", a); // แสดงผลค่าขอตัวเเปร a
  return 0; // ส่งตัวเลขกลับเพื่อให้ Function สมบูรณ์
}