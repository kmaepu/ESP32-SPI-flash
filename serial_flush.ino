
#include "esp_spi_flash.h"

#define SPIFFS_BASE_ADDR 0x291000 // SPI flashのベースアドレス

uint32_t chip_size = 0;
uint8_t w_buf[SPI_FLASH_SEC_SIZE];
uint8_t r_buf[SPI_FLASH_SEC_SIZE];

void setup() { 
  Serial.begin(115200, SERIAL_8N1);
  w_buf[0] = 0x00;
}

void loop() {
  delay(1000);
  
  // SPI flashから読み込み
  spi_flash_read(SPIFFS_BASE_ADDR,r_buf,SPI_FLASH_SEC_SIZE);
  Serial.printf("Read SPI flash data = %x\n",r_buf[0]);

  w_buf[0] = r_buf[0] + 1;

  // SPI flashの指定アドレスから指定サイズだけデータを消去する
  spi_flash_erase_range(SPIFFS_BASE_ADDR,SPI_FLASH_SEC_SIZE);
  
  // SPI flashへ書き込み
  Serial.printf("Write to SPI flash = %x\n\n",w_buf[0]);
  spi_flash_write(SPIFFS_BASE_ADDR,w_buf,1);
}
