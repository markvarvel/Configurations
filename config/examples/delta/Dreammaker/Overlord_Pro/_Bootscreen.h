/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#define CUSTOM_BOOTSCREEN_BMPWIDTH 80

const uint8_t custom_start_bmp[] PROGMEM = {
  B00000011,B10000011,B00001101,B11111101,B11111000,B11000000,B00011100,B00011111,B10001111,B11000000,
  B00011111,B11100011,B00001101,B11111101,B11111110,B11000000,B11111111,B00011111,B11001111,B11110000,
  B00011100,B01100011,B00001101,B10000001,B10001110,B11000000,B11100011,B00011001,B11001100,B01110000,
  B00011100,B01110011,B00001101,B10000001,B10001110,B11000000,B11100011,B10011000,B11001100,B00111000,
  B00011000,B01110001,B10011001,B11111001,B10001110,B11000000,B11000011,B10011001,B11001100,B00011000,
  B00011000,B01110001,B10011001,B11111001,B11111100,B11000000,B11000011,B10011111,B11001100,B00011000,
  B00011000,B01110001,B11111001,B10000001,B11111000,B11000000,B11000011,B10011111,B10001100,B00111000,
  B00011111,B11100000,B11110001,B11111101,B10001100,B11111100,B11111111,B00011001,B11001111,B11110000,
  B00001111,B11000000,B11110001,B11111101,B10001100,B11111100,B01111110,B00011001,B11001111,B11100000,
  B00000011,B10000000,B01100001,B11111101,B10001110,B11111100,B00011100,B00011000,B11001111,B11000000
};