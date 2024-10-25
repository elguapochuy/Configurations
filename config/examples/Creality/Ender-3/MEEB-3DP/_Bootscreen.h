/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration_adv.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 1000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  112

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00011111,B11111110,B00001111,B11111111,B10000000,B01111111,B11111111,B11110000,B00111111,B11111111,B11111001,B11111111,B11111111,B11100000,
  B00011111,B11111111,B00001111,B11111111,B10000000,B11111111,B11111111,B11111000,B01111111,B11111111,B11111001,B11111111,B11111111,B11110000,
  B00011111,B11111111,B00001111,B11111111,B10000001,B11111111,B11111111,B11111000,B11111111,B11111111,B11111001,B11111111,B11111111,B11111000,
  B00111111,B11111111,B00001111,B11111111,B10000011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111001,B11111111,B11111111,B11111100,
  B00111111,B11111111,B00011111,B11111111,B10000011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111001,B11111111,B11111111,B11111110,
  B00111111,B11111111,B00011111,B11111111,B10000011,B11111111,B11111111,B11111011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111110,
  B00111111,B11111111,B00011111,B11111111,B10000011,B11111111,B11111111,B11111011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111110,
  B00111111,B11111111,B00011111,B11111111,B11000011,B11111111,B11111111,B11110011,B11111111,B11111111,B11111001,B11111111,B00000011,B11111110,
  B00111111,B11111111,B10011111,B11111111,B11000011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000011,B11111110,
  B00111111,B11111111,B10011111,B11111111,B11000011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000011,B11111110,
  B00111111,B11111111,B10011111,B11111111,B11000011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000011,B11111110,
  B00111111,B11111111,B10111111,B11111111,B11000011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B11111111,B11111110,
  B00111111,B11111111,B10111111,B11111111,B11000011,B11111111,B11111111,B11000011,B11111111,B11111111,B11100001,B11111111,B11111111,B11111100,
  B01111111,B11111111,B10111111,B11111111,B11000011,B11111111,B11111111,B11100011,B11111111,B11111111,B11100001,B11111111,B11111111,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11000011,B11111111,B11111111,B11100011,B11111111,B11111111,B11100001,B11111111,B11111111,B11111000,
  B01111111,B11111111,B11111111,B11111111,B11000011,B11111111,B11111111,B11100011,B11111111,B11111111,B11100001,B11111111,B11111111,B11110000,
  B01111111,B11111111,B11111111,B11111111,B11000011,B11111111,B11111111,B11100011,B11111111,B11111111,B11100001,B11111111,B11111111,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11100011,B11111111,B11111111,B11100011,B11111111,B11111111,B11100001,B11111111,B11111111,B11111110,
  B01111111,B11011111,B11111111,B11111111,B11100011,B11111111,B11111111,B11100011,B11111111,B11111111,B11100001,B11111111,B11111111,B11111110,
  B01111111,B11011111,B11111111,B10111111,B11100011,B11111111,B11111111,B11000011,B11111111,B11111111,B11100001,B11111111,B00000001,B11111111,
  B01111111,B11011111,B11111111,B10111111,B11100011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000001,B11111111,
  B01111111,B11011111,B11111111,B00111111,B11100011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000001,B11111111,
  B11111111,B11011111,B11111111,B00111111,B11100011,B11111110,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000001,B11111111,
  B11111111,B10011111,B11111111,B00111111,B11100011,B11111111,B00000000,B00000011,B11111111,B00000000,B00000001,B11111111,B00000001,B11111111,
  B11111111,B10011111,B11111111,B00111111,B11100011,B11111111,B11111111,B11111011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111111,
  B11111111,B10001111,B11111111,B00111111,B11100011,B11111111,B11111111,B11111011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111111,
  B11111111,B10001111,B11111111,B00111111,B11110011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111001,B11111111,B11111111,B11111110,
  B11111111,B10001111,B11111111,B00011111,B11110011,B11111111,B11111111,B11111001,B11111111,B11111111,B11111001,B11111111,B11111111,B11111110,
  B11111111,B10001111,B11111110,B00011111,B11110001,B11111111,B11111111,B11111001,B11111111,B11111111,B11111001,B11111111,B11111111,B11111100,
  B11111111,B10001111,B11111110,B00011111,B11110001,B11111111,B11111111,B11111000,B11111111,B11111111,B11111001,B11111111,B11111111,B11111000,
  B11111111,B10001111,B11111110,B00011111,B11110000,B11111111,B11111111,B11111000,B01111111,B11111111,B11111001,B11111111,B11111111,B11110000,
  B11111111,B00000111,B11111110,B00011111,B11110000,B00111111,B11111111,B11100000,B00011111,B11111111,B11110001,B11111111,B11111111,B11000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000011,B11111111,B11111011,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B00111111,B11111111,B11111111,B11111111,B11100000,
  B00000000,B00000000,B11111111,B11111111,B11111111,B00000000,B11111011,B11111111,B11111111,B10000000,B00011111,B01111111,B11111111,B11110000,
  B00000000,B00000000,B00000111,B11111111,B11111111,B00000000,B00000011,B11111111,B11111111,B11000000,B00000000,B01111111,B11111111,B11111000,
  B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000011,B11111111,B11111111,B11100000,B00000000,B01111111,B11111111,B11111000,
  B00000011,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B01111111,B11111111,B11111000,
  B00000000,B00000000,B11111111,B11111111,B11111111,B00000000,B11111111,B11111111,B11111111,B11110000,B00011111,B11111111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B11111111,B00000000,B00000111,B11111111,B11111111,B11110000,B00000000,B11111111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B11111111,B00000000,B00000111,B11111000,B00011111,B11110000,B00000000,B11111111,B00001111,B11111000,
  B00000000,B01111111,B11111111,B00000001,B11111111,B11111111,B11110111,B11111000,B00011111,B11111111,B11111110,B11111111,B00001111,B11111000,
  B00000000,B00000000,B00011111,B00111111,B11111110,B00000001,B11110111,B11111000,B00011111,B11110000,B00111110,B11111111,B00001111,B11111000,
  B00000000,B00000000,B00000000,B11111111,B11111100,B00000000,B00001111,B11111000,B00011111,B11110000,B00000001,B11111111,B00001111,B11111000,
  B00000000,B00000000,B00000000,B11111111,B11111000,B00000000,B00001111,B11111000,B00011111,B11110000,B00000001,B11111111,B00001111,B11111000,
  B00000000,B01111111,B11111110,B11111111,B11111111,B11111111,B11101111,B11111000,B00111111,B11111111,B11111101,B11111111,B00011111,B11110000,
  B00000000,B00000000,B00111110,B11111111,B11111100,B00000011,B11101111,B11110000,B00111111,B11100000,B01111101,B11111111,B11111111,B11110000,
  B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00001111,B11110000,B00111111,B11100000,B00000001,B11111111,B11111111,B11110000,
  B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00001111,B11110000,B00111111,B11100000,B00000001,B11111111,B11111111,B11100000,
  B00000000,B11111111,B11111110,B00011111,B11111111,B11111111,B11111111,B11110000,B00111111,B11111111,B11111111,B11111111,B11111111,B11000000,
  B00000000,B00000000,B01111100,B00000011,B11111110,B00000011,B11011111,B11110000,B01111111,B11000000,B01111011,B11111111,B11111111,B10000000,
  B00000000,B00000000,B00010000,B00000011,B11111110,B00000000,B00011111,B11110000,B01111111,B11000000,B00000011,B11111111,B11111111,B00000000,
  B00000000,B00000000,B00011111,B11111111,B11111110,B00000000,B00011111,B11111111,B11111111,B11000000,B00000011,B11111111,B11111100,B00000000,
  B00011111,B11111111,B10111111,B11111111,B11111111,B11111111,B11011111,B11111111,B11111111,B11111111,B11111011,B11111100,B00000000,B00000000,
  B00000000,B00001111,B10111111,B11111111,B11111100,B00000111,B11111111,B11111111,B11111111,B00000000,B11111011,B11111100,B00000000,B00000000,
  B00000000,B00000000,B00111111,B11111111,B11111000,B00000000,B00111111,B11111111,B11111110,B00000000,B00000111,B11111100,B00000000,B00000000,
  B00000000,B00000000,B01111111,B11111111,B11111000,B00000000,B00111111,B11111111,B11111110,B00000000,B00000111,B11111100,B00000000,B00000000,
  B01111111,B11111111,B01111111,B11111111,B11111111,B11111111,B10111111,B11111111,B11111111,B11111111,B11110111,B11111100,B00000000,B00000000,
  B00000000,B00111111,B01111111,B11111111,B10000000,B00001111,B10111111,B11111111,B11000000,B00000001,B11110111,B11111000,B00000000,B00000000,
  B00000000,B00000000,B00000111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

// Saves 453 bytes
#define COMPACT_CUSTOM_BOOTSCREEN
const unsigned char custom_start_bmp_rle[443] PROGMEM = {
  0x0F, 0xD3, 0xB4, 0xC7, 0xF0, 0x35, 0xF0, 0x31, 0xF0, 0x47, 0xC3, 0xC6, 0xF0, 0x53, 0xF0, 0x41,
  0xF0, 0x56, 0xC3, 0xC5, 0xF0, 0x62, 0xF0, 0x51, 0xF0, 0x64, 0xD3, 0xC4, 0xF0, 0x71, 0xF0, 0x61,
  0xF0, 0x73, 0xD2, 0xD4, 0xF0, 0x71, 0xF0, 0x61, 0xF0, 0x82, 0xD2, 0xD4, 0xF0, 0x70, 0xF0, 0x71,
  0xF0, 0x82, 0xD2, 0xD4, 0xF0, 0x70, 0xF0, 0x71, 0xF0, 0x82, 0xD2, 0xE3, 0xF0, 0x61, 0xF0, 0x71,
  0x85, 0x82, 0xE1, 0xE3, 0x8E, 0x9E, 0x85, 0x82, 0xE1, 0xE3, 0x8E, 0x9E, 0x85, 0x82, 0xE1, 0xE3,
  0x8E, 0x9E, 0x85, 0x82, 0xE0, 0xF0, 0x03, 0x8E, 0x9E, 0xF0, 0x82, 0xE0, 0xF0, 0x03, 0xF0, 0x43,
  0xF0, 0x53, 0xF0, 0x72, 0xF0, 0x00, 0xF0, 0x03, 0xF0, 0x52, 0xF0, 0x53, 0xF0, 0x72, 0xF1, 0x13,
  0xF0, 0x52, 0xF0, 0x53, 0xF0, 0x63, 0xF1, 0x13, 0xF0, 0x52, 0xF0, 0x53, 0xF0, 0x54, 0xF1, 0x13,
  0xF0, 0x52, 0xF0, 0x53, 0xF0, 0x72, 0xF1, 0x22, 0xF0, 0x52, 0xF0, 0x53, 0xF0, 0x81, 0x80, 0xF0,
  0x82, 0xF0, 0x52, 0xF0, 0x53, 0xF0, 0x81, 0x80, 0xD0, 0x82, 0xF0, 0x43, 0xF0, 0x53, 0x86, 0x80,
  0x80, 0xD0, 0x82, 0x8E, 0x9E, 0x86, 0x80, 0x80, 0xC1, 0x82, 0x8E, 0x9E, 0x86, 0xF0, 0x30, 0xC1,
  0x82, 0x8E, 0x9E, 0x86, 0xF0, 0x21, 0xC1, 0x82, 0x9D, 0x9E, 0x86, 0xF0, 0x21, 0xC1, 0x82, 0xF0,
  0x70, 0xF0, 0x71, 0xF1, 0x22, 0xB1, 0x82, 0xF0, 0x70, 0xF0, 0x71, 0xF1, 0x22, 0xB1, 0x91, 0xF0,
  0x71, 0xF0, 0x61, 0xF0, 0x80, 0x82, 0xB2, 0x81, 0xF0, 0x71, 0xF0, 0x61, 0xF0, 0x80, 0x82, 0xA3,
  0x82, 0xF0, 0x61, 0xF0, 0x61, 0xF0, 0x71, 0x82, 0xA3, 0x82, 0xF0, 0x62, 0xF0, 0x51, 0xF0, 0x62,
  0x82, 0xA3, 0x83, 0xF0, 0x53, 0xF0, 0x41, 0xF0, 0x53, 0x74, 0x93, 0x85, 0xF0, 0x17, 0xF0, 0x12,
  0xF0, 0x3F, 0x80, 0xAF, 0x41, 0xE0, 0xF2, 0x21, 0xF1, 0x1F, 0x05, 0xF0, 0x87, 0x40, 0xF0, 0x39,
  0x40, 0xF0, 0x3F, 0x09, 0xF0, 0x3D, 0xF0, 0x4E, 0xF0, 0x4F, 0x08, 0xF0, 0x4C, 0xF0, 0x5D, 0xF0,
  0x48, 0xF4, 0x20, 0xF0, 0x4F, 0x03, 0xF0, 0x87, 0xF0, 0xC6, 0xF0, 0xBF, 0x12, 0x7C, 0xF0, 0x7B,
  0xF0, 0x6F, 0x12, 0x7C, 0x75, 0x8B, 0x73, 0x8B, 0xE6, 0xF0, 0x50, 0x75, 0xF0, 0x40, 0x73, 0x8F,
  0x06, 0x41, 0xC7, 0x40, 0x75, 0x85, 0x40, 0x73, 0x8F, 0x0B, 0xDD, 0x85, 0x8A, 0x83, 0x8F, 0x0B,
  0xCE, 0x85, 0x8A, 0x83, 0x8B, 0xD0, 0xF0, 0xB0, 0x84, 0xF0, 0x40, 0x82, 0x8F, 0x06, 0x40, 0xD7,
  0x40, 0x75, 0x85, 0x40, 0xF0, 0x5F, 0x0C, 0xEC, 0x75, 0x8B, 0xF0, 0x5F, 0x0C, 0xEC, 0x75, 0x8B,
  0xF0, 0x4C, 0xE3, 0xF1, 0x15, 0xF1, 0x8F, 0x07, 0x47, 0x86, 0x30, 0x84, 0x86, 0x30, 0xF0, 0x3F,
  0x0A, 0x09, 0x8B, 0x84, 0x8B, 0xF0, 0x2F, 0x0B, 0xF0, 0x4B, 0xF0, 0x7B, 0xF0, 0x0C, 0xD0, 0xF1,
  0x00, 0xF1, 0x20, 0x7F, 0x0E, 0x40, 0xF0, 0x46, 0xF0, 0xB7, 0x40, 0x7F, 0x14, 0xF0, 0x3C, 0xF0,
  0x5D, 0x8F, 0x13, 0xF0, 0x4C, 0xF0, 0x5D, 0x8F, 0x03, 0xE0, 0xF1, 0x00, 0xF1, 0x20, 0x8F, 0x0C,
  0x50, 0xF0, 0x0A, 0x40, 0xF0, 0x0C, 0x40, 0x7F, 0x18, 0x7F, 0xB3
};
