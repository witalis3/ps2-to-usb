#include "keymap.h"


const uint8_t keymap[] = {
  0x00, // 00
  0x42, // 01 (F9)
  0x00, //
  0x3e, // 03 (F5)
  0x3c, // 04 (F3)
  0x3a, // 05 (F1)
  0x3b, // 06 (F2)
  0x45, // 07 (F12)
  0x00, //
  0x43, // 09 (F10)
  0x41, // 0a (F8)
  0x3f, // 0b (F6)
  0x3d, // 0c (F4)
  0x2b, // 0d (Tab)
  0x35, // 0e (` ~)
  0x00, //
  0x00, //
  0xe3, // 11 (LAlt, mapped to LGUI)
  0xe1, // 12 (LShift)
  0x00, //
  0xe0, // 14 (LCtrl)
  0x14, // 15 (Q)
  0x1e, // 16 (1 !)
  0x00, //
  0x00, //
  0x00, //
  0x1d, // 1a (Z)
  0x16, // 1b (S)
  0x04, // 1c (A)
  0x1a, // 1d (W)
  0x1f, // 1e (2 @)
  0x00, //
  0x00, //
  0x06, // 21 (C)
  0x1b, // 22 (X)
  0x07, // 23 (D)
  0x08, // 24 (E)
  0x21, // 25 (4 $)
  0x20, // 26 (3 #)
  0x00, //
  0x00, //
  0x2c, // 29 (space)
  0x19, // 2a (V)
  0x09, // 2b (F)
  0x17, // 2c (T)
  0x15, // 2d (R)
  0x22, // 2e (5 % E)
  0x00, //
  0x00, //
  0x11, // 31 (N)
  0x05, // 32 (B)
  0x0b, // 33 (H)
  0x0a, // 34 (G)
  0x1c, // 35 (Y)
  0x23, // 36 (6 ^)
  0x00, //
  0x00, //
  0x00, //
  0x10, // 3a (M)
  0x0d, // 3b (J)
  0x18, // 3c (U)
  0x24, // 3d (7 &)
  0x25, // 3e (8 *)
  0x00, //
  0x00, //
  0x36, // 41 (, <)
  0x0e, // 42 (K)
  0x0c, // 43 (I)
  0x12, // 44 (O)
  0x27, // 45 (0 ))
  0x26, // 46 (9 ()
  0x00, //
  0x00, //
  0x37, // 49 (. >)
  0x38, // 4a (/ ?)
  0x0f, // 4b (L)
  0x33, // 4c (; :)
  0x13, // 4d (P)
  0x2d, // 4e (- _)
  0x00, //
  0x00, //
  0x00, //
  0x34, // 52 (' ")
  0x00, //
  0x2f, // 54 ([ {)
  0x2e, // 55 (= +)
  0x00, //
  0x00, //
  0x29, // 58 (CapsLock mapped to Esc)
  0xe5, // 59 (RShift)
  0x28, // 5a (Enter)
  0x30, // 5b (] })
  0x00, //
  0x31, // 5d (Backslash |)
  0x00, //
  0x00, //
  0x00, //
  0xe2, // 61 (first key next to shift, mapped to LAlt)
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x2a, // 66 (Backspace)
  0x00, //
  0x00, //
  0x59, // 69 (KP-1 / End)
  0x00, //
  0x5c, // 6b (KP-4 / Left)
  0x5f, // 6c (KP-7 / Home)
  0x00, //
  0x00, //
  0x00, //
  0x62, // 70 (KP-0 / Ins)
  0x63, // 71 (KP-. / Del)
  0x5a, // 72 (KP-2 / Down)
  0x5d, // 73 (KP-5)
  0x5e, // 74 (KP-6 / Right)
  0x60, // 75 (KP-8 / Up)
  0x29, // 76 (Esc)
  0x53, // 77 (NumLock)
  0x44, // 78 (F11)
  0x57, // 79 (KP-+)
  0x5b, // 7a (KP-3 / PgDn)
  0x56, // 7b (KP--)
  0x55, // 7c (KP-*)
  0x61, // 7d (KP-9 / PgUp)
  0x47, // 7e (ScrollLock)
  0x00, //
  0x00, //
  0x00, //
  0x00, //
  0x40, // 83 (F7)
  0x9a, // 84 (Alt+SysRq)
  0x00, // 0x85
  0x00, // 0x86
  0x00, // 0x87
  0x00, // 0x88
  0x00, // 0x89
  0x00, // 0x8a
  0x00, // 0x8b
  0x00, // 0x8c
  0x00, // 0x8d
  0x00, // 0x8e
  0x00, // 0x8f
  0x00, // 0x90
  0x00, // 0x91
  0x00, // 0x92
  0x00, // 0x93
  0x00, // 0x94
  0x00, // 0x95
  0x00, // 0x96
  0x00, // 0x97
  0x00, // 0x98
  0x00, // 0x99
  0x00, // 0x9a
  0x00, // 0x9b
  0x00, // 0x9c
  0x00, // 0x9d
  0x00, // 0x9e
  0x00, // 0x9f
  0x00, // 0xa0
  0x00, // 0xa1
  0x00, // 0xa2
  0x00, // 0xa3
  0x00, // 0xa4
  0x00, // 0xa5
  0x00, // 0xa6
  0x00, // 0xa7
  0x00, // 0xa8
  0x00, // 0xa9
  0x00, // 0xaa
  0x00, // 0xab
  0x00, // 0xac
  0x00, // 0xad
  0x00, // 0xae
  0x00, // 0xaf
  0x00, // 0xb0
  0x00, // 0xb1
  0x00, // 0xb2
  0x00, // 0xb3
  0x00, // 0xb4
  0x00, // 0xb5
  0x00, // 0xb6
  0x00, // 0xb7
  0x00, // 0xb8
  0x00, // 0xb9
  0x00, // 0xba
  0x00, // 0xbb
  0x00, // 0xbc
  0x00, // 0xbd
  0x00, // 0xbe
  0x00, // 0xbf
  0x00, // 0xc0
  0x00, // 0xc1
  0x00, // 0xc2
  0x00, // 0xc3
  0x00, // 0xc4
  0x00, // 0xc5
  0x00, // 0xc6
  0x00, // 0xc7
  0x00, // 0xc8
  0x00, // 0xc9
  0x00, // 0xca
  0x00, // 0xcb
  0x00, // 0xcc
  0x00, // 0xcd
  0x00, // 0xce
  0x00, // 0xcf
  0x00, // 0xd0
  0x00, // 0xd1
  0x00, // 0xd2
  0x00, // 0xd3
  0x00, // 0xd4
  0x00, // 0xd5
  0x00, // 0xd6
  0x00, // 0xd7
  0x00, // 0xd8
  0x00, // 0xd9
  0x00, // 0xda
  0x00, // 0xdb
  0x00, // 0xdc
  0x00, // 0xdd
  0x00, // 0xde
  0x00, // 0xdf
  0x00, // 0xe0
  0x00, // 0xe1
  0x00, // 0xe2
  0x00, // 0xe3
  0x00, // 0xe4
  0x00, // 0xe5
  0x00, // 0xe6
  0x00, // 0xe7
  0x00, // 0xe8
  0x00, // 0xe9
  0x00, // 0xea
  0x00, // 0xeb
  0x00, // 0xec
  0x00, // 0xed
  0x00, // 0xee
  0x00, // 0xef
  0x00, // 0xf0
  0x00, // 0xf1
  0x00, // 0xf2
  0x00, // 0xf3
  0x00, // 0xf4
  0x00, // 0xf5
  0x00, // 0xf6
  0x00, // 0xf7
  0x00, // 0xf8
  0x00, // 0xf9
  0x00, // 0xfa
  0x00, // 0xfb
  0x00, // 0xfc
  0x00, // 0xfd
  0x00, // 0xfe
  0x00, // 0xff
};

const uint8_t keymap_prefixed[] = {
  0x00, // 0x00
  0x00, // 0x01
  0x00, // 0x02
  0x00, // 0x03
  0x00, // 0x04
  0x00, // 0x05
  0x00, // 0x06
  0x00, // 0x07
  0x00, // 0x08
  0x00, // 0x09
  0x00, // 0x0a
  0x00, // 0x0b
  0x00, // 0x0c
  0x00, // 0x0d
  0x00, // 0x0e
  0x00, // 0x0f
  0x00, // 0x10
  0xe6, // 0x11 LAlt
  0x00, // 0x12
  0x00, // 0x13
  0xe4, // 0x14 RCtrl
  0x00, // 0x15
  0x00, // 0x16
  0x00, // 0x17
  0x00, // 0x18
  0x00, // 0x19
  0x00, // 0x1a
  0x00, // 0x1b
  0x00, // 0x1c
  0x00, // 0x1d
  0x00, // 0x1e
  0x00, // 0x1f
  0x00, // 0x20
  0x00, // 0x21
  0x00, // 0x22
  0x00, // 0x23
  0x00, // 0x24
  0x00, // 0x25
  0x00, // 0x26
  0x00, // 0x27
  0x00, // 0x28
  0x00, // 0x29
  0x00, // 0x2a
  0x00, // 0x2b
  0x00, // 0x2c
  0x00, // 0x2d
  0x00, // 0x2e
  0x00, // 0x2f
  0x00, // 0x30
  0x00, // 0x31
  0x00, // 0x32
  0x00, // 0x33
  0x00, // 0x34
  0x00, // 0x35
  0x00, // 0x36
  0x00, // 0x37
  0x00, // 0x38
  0x00, // 0x39
  0x00, // 0x3a
  0x00, // 0x3b
  0x00, // 0x3c
  0x00, // 0x3d
  0x00, // 0x3e
  0x00, // 0x3f
  0x00, // 0x40
  0x00, // 0x41
  0x00, // 0x42
  0x00, // 0x43
  0x00, // 0x44
  0x00, // 0x45
  0x00, // 0x46
  0x00, // 0x47
  0x00, // 0x48
  0x00, // 0x49
  0x54, // 0x4a KP /
  0x00, // 0x4b
  0x00, // 0x4c
  0x00, // 0x4d
  0x00, // 0x4e
  0x00, // 0x4f
  0x00, // 0x50
  0x00, // 0x51
  0x00, // 0x52
  0x00, // 0x53
  0x00, // 0x54
  0x00, // 0x55
  0x00, // 0x56
  0x00, // 0x57
  0x00, // 0x58
  0x00, // 0x59
  0x58, // 0x5a KP Return
  0x00, // 0x5b
  0x00, // 0x5c
  0x00, // 0x5d
  0x00, // 0x5e
  0x00, // 0x5f
  0x00, // 0x60
  0x00, // 0x61
  0x00, // 0x62
  0x00, // 0x63
  0x00, // 0x64
  0x00, // 0x65
  0x00, // 0x66
  0x00, // 0x67
  0x00, // 0x68
  0x4d, // 0x69 End
  0x00, // 0x6a
  0x50, // 0x6b Left
  0x4a, // 0x6c Home
  0x00, // 0x6d
  0x00, // 0x6e
  0x00, // 0x6f
  0x49, // 0x70 Insert
  0x4c, // 0x71 Delete
  0x51, // 0x72 Down
  0x00, // 0x73
  0x4f, // 0x74 Right
  0x52, // 0x75 Up
  0x00, // 0x76
  0x00, // 0x77
  0x00, // 0x78
  0x00, // 0x79
  0x4e, // 0x7a PgDn
  0x00, // 0x7b
  0x00, // 0x7c
  0x55, // 0x7d PgUp
  0x00, // 0x7e
  0x00, // 0x7f
  0x00, // 0x80
  0x00, // 0x81
  0x00, // 0x82
  0x00, // 0x83
  0x00, // 0x84
  0x00, // 0x85
  0x00, // 0x86
  0x00, // 0x87
  0x00, // 0x88
  0x00, // 0x89
  0x00, // 0x8a
  0x00, // 0x8b
  0x00, // 0x8c
  0x00, // 0x8d
  0x00, // 0x8e
  0x00, // 0x8f
  0x00, // 0x90
  0x00, // 0x91
  0x00, // 0x92
  0x00, // 0x93
  0x00, // 0x94
  0x00, // 0x95
  0x00, // 0x96
  0x00, // 0x97
  0x00, // 0x98
  0x00, // 0x99
  0x00, // 0x9a
  0x00, // 0x9b
  0x00, // 0x9c
  0x00, // 0x9d
  0x00, // 0x9e
  0x00, // 0x9f
  0x00, // 0xa0
  0x00, // 0xa1
  0x00, // 0xa2
  0x00, // 0xa3
  0x00, // 0xa4
  0x00, // 0xa5
  0x00, // 0xa6
  0x00, // 0xa7
  0x00, // 0xa8
  0x00, // 0xa9
  0x00, // 0xaa
  0x00, // 0xab
  0x00, // 0xac
  0x00, // 0xad
  0x00, // 0xae
  0x00, // 0xaf
  0x00, // 0xb0
  0x00, // 0xb1
  0x00, // 0xb2
  0x00, // 0xb3
  0x00, // 0xb4
  0x00, // 0xb5
  0x00, // 0xb6
  0x00, // 0xb7
  0x00, // 0xb8
  0x00, // 0xb9
  0x00, // 0xba
  0x00, // 0xbb
  0x00, // 0xbc
  0x00, // 0xbd
  0x00, // 0xbe
  0x00, // 0xbf
  0x00, // 0xc0
  0x00, // 0xc1
  0x00, // 0xc2
  0x00, // 0xc3
  0x00, // 0xc4
  0x00, // 0xc5
  0x00, // 0xc6
  0x00, // 0xc7
  0x00, // 0xc8
  0x00, // 0xc9
  0x00, // 0xca
  0x00, // 0xcb
  0x00, // 0xcc
  0x00, // 0xcd
  0x00, // 0xce
  0x00, // 0xcf
  0x00, // 0xd0
  0x00, // 0xd1
  0x00, // 0xd2
  0x00, // 0xd3
  0x00, // 0xd4
  0x00, // 0xd5
  0x00, // 0xd6
  0x00, // 0xd7
  0x00, // 0xd8
  0x00, // 0xd9
  0x00, // 0xda
  0x00, // 0xdb
  0x00, // 0xdc
  0x00, // 0xdd
  0x00, // 0xde
  0x00, // 0xdf
  0x00, // 0xe0
  0x00, // 0xe1
  0x00, // 0xe2
  0x00, // 0xe3
  0x00, // 0xe4
  0x00, // 0xe5
  0x00, // 0xe6
  0x00, // 0xe7
  0x00, // 0xe8
  0x00, // 0xe9
  0x00, // 0xea
  0x00, // 0xeb
  0x00, // 0xec
  0x00, // 0xed
  0x00, // 0xee
  0x00, // 0xef
  0x00, // 0xf0
  0x00, // 0xf1
  0x00, // 0xf2
  0x00, // 0xf3
  0x00, // 0xf4
  0x00, // 0xf5
  0x00, // 0xf6
  0x00, // 0xf7
  0x00, // 0xf8
  0x00, // 0xf9
  0x00, // 0xfa
  0x00, // 0xfb
  0x00, // 0xfc
  0x00, // 0xfd
  0x00, // 0xfe
  0x00, // 0xff
};