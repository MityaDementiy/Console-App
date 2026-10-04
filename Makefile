BUILD_DIR = build

all: build run

build:
	mkdir -p $(BUILD_DIR)
	cmake -S . -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

# Запуск скомбінованої програми (заміни 'app' на назву твого бінарника з CMakeLists.txt)
run:
	./$(BUILD_DIR)/app

# Очищення тимчасових файлів збірки
clean:
	rm -rf $(BUILD_DIR)

# Перезбірка з нуля
rebuild: clean all
.PHONY: all build run clean rebuild