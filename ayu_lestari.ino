#include <LiquidCrystal_I2C.h>

// inialisasi pin lcd
LiquidCrystal_I2C lcd(0x27, 16, 2);

// inialisasi masing2 pin
const int pinSensor = 8;
const int pinReset = 9;

// inialisasi masing2 variabel
int hitung = 0;
int kondisi1 = 0;
int status1;




//*** --------- program default/setting awal ---------- ***//
void setup()
{
 // inialisasi status pin reset
 pinMode(pinReset, INPUT);
 // mengaktifkan pull up resisitor pin reset sebagai INPUT
 digitalWrite(pinReset, HIGH);

pinMode(pinSensor, INPUT);

// inialisasi jumlah baris-kolom lcd
 lcd.begin();

// tulisan awal pada lcd
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Alathitung");
 lcd.setCursor(0, 1);
 lcd.print("Ayu Lestari");
 delay(1000);
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Ready");
 delay(1000);
}




//** ----------------- PROGRAM UTAMA -------------------- **//
void loop()
{

// status1 adalah hasil pembacaan pin sensor
 status1 = digitalRead(pinSensor);

// jika pin sensor bernilai logic HIGH
 if (status1 == HIGH)
 {
 // hasil hitung tetap
hitung = hitung;
 }

 else{
 hitung += 1;
 kondisi1 = 0;
 delay(500);
  }

 lcd.setCursor(0, 0);
 lcd.print("Jumlah Brg  : ");
 lcd.setCursor(0, 1);
 lcd.print(hitung);
 delay(300); // delay update tulisan pada lcd
}
