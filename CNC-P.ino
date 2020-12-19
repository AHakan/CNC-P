/* 
# Eksen kontrolleri
# Başlangıç noktaları belirleme
# Ekran ile makina hakkında bilgi alma
# SD kart okuyucu veya USB Bellek okuyucu ile bilgisayarsız g-code çalıştırma
# Kontrol paneli şeklinde tasarlama
# Devrenin pcbsini tasarlama ve ürettirme
*/

#include "cncp.h"

void setup() {
    CNCP.init();
}

void loop() {
    CNCP.loop();
}
