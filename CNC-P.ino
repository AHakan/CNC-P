/* 
# Eksen kontrolleri
# Başlangıç noktaları belirleme
# Ekran ile makina hakkında bilgi alma
# SD kart okuyucu veya USB Bellek okuyucu ile bilgisayarsız g-code çalıştırma
# Kontrol paneli şeklinde tasarlama
# Devrenin pcbsini tasarlama ve ürettirme
*/

#include "buttons.h"

void setup() {
    BUTTONS.init();
}

void loop() {
    BUTTONS.onPressed();
    delay(100);
}
