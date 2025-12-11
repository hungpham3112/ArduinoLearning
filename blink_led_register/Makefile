# Tên chip và xung nhịp
MCU = atmega328p
F_CPU = 16000000UL
BAUD = 115200
PORT = /dev/ttyUSB0
PROGRAMMER = arduino

# Công cụ
CC = avr-gcc
OBJCOPY = avr-objcopy
AVRDUDE = avrdude

# Cờ biên dịch
CFLAGS = -Os -DF_CPU=$(F_CPU) -mmcu=$(MCU) -Wall

# --- Các lệnh (Targets) ---

# Gõ 'make' sẽ chạy cái này: Biên dịch -> Tạo Hex
all: main.hex

# Bước 1: Compile .c -> .elf
main.elf: main.c
	$(CC) $(CFLAGS) -o main.elf main.c

# Bước 2: Convert .elf -> .hex
main.hex: main.elf
	$(OBJCOPY) -O ihex -R .eeprom main.elf main.hex

# Bước 3: Nạp chip (Gõ 'make flash')
flash: main.hex
	$(AVRDUDE) -F -V -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:main.hex

# Dọn dẹp file rác (Gõ 'make clean')
clean:
	rm -f *.elf *.hex
