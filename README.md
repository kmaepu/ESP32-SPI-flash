# ESP-WROOOM-32 SPI flash access

## Overview
　このソースコードはESP-WROOM-32の外部SPIフラッシュメモリ（4MB)に、インクリメントデータ1byteをRead/Writeするコードです。
外部SPIフラッシュメモリは不揮発性なので、電源を落としてもデータが残ります。様々な処理に使用するパラメータを起動時にロードする事などに使えます。
## Dependency
　開発環境：Arduino-IDE  
 　使用ボード：ESP-32-DevKit  
　ライブラリ：esp_spi_flash.h　※１  
            
  ※１：Arduino-IDEでESP-WROOM-32の開発環境が整っていればデフォルトで用意されています

## Setup
　Arduino-IDEでESP-WROOM-32のコードを開発する環境が必要です。  
 
## Usage
　1.スケッチファイル（.ino）を入手  
　2.スケッチファイルを開いてコンパイル  
　3.ボードに書き込み  
　4.シリアルモニタを表示（ボーレート：115200）  
　　　１秒間隔でデータ１byteをRead/Writeします。書き込むデータは読み込んだデータに1を足した値です。 　　

## Licence
This software is released under the MIT License, see LICENSE.

## Authors
 kmaepu 
 
## References
　ESPRESSIF ESP-IDE Programing Guide SPI Flash APIs  
 https://docs.espressif.com/projects/esp-idf/en/latest/api-reference/storage/spi_flash.html
