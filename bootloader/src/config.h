#pragma once

// HID Bootloader takes 4K
#define USER_PROGRAM 0x08001000

#define RTC_BOOTLOADER_FLAG 0x7662 /* Flag whether to jump into bootloader, "vb" */
#define RTC_INSECURE_FLAG 0x4953 /* Flag to indicate qmk that we want to boot into insecure mode, "IS" */

#if defined(TARGET_GENERIC)
#define VIAL_KEYBOARD_UID {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 12
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 13
#elif defined(TARGET_VIAL_TEST)
#define VIAL_KEYBOARD_UID {0x6F, 0xC5, 0xEE, 0x60, 0x90, 0x92, 0x53, 0xA4}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 12
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 13
#elif defined(TARGET_BOOTLEG_REV_B)
#define VIAL_KEYBOARD_UID {0x71, 0xDD, 0x6F, 0x80, 0x44, 0xE7, 0x94, 0x58}
/* setup for bootleg, ESC */
#define BL_OUTPUT_BANK GPIOC
#define BL_OUTPUT_PIN 4
#define BL_INPUT_BANK GPIOA
#define BL_INPUT_PIN 7
#else
#error Unknown target
#endif
