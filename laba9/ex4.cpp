#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>  // для strcpy

int main() {
    const int MAX_WORDS = 20;
    const int WORD_LEN = 10;
    
    int n;
    std::cout << "Введите количество слов (не более " << MAX_WORDS << "): ";
    std::cin >> n;
    
    if (n > MAX_WORDS) {
        std::cout << "Слишком много слов! Будет обработано только " << MAX_WORDS << ".\n";
        n = MAX_WORDS;
    }
    
    // Вводим слова один раз
    std::string temp[MAX_WORDS];
    std::cout << "Введите " << n << " слов:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> temp[i];
    }
    
    // ===== ВАРИАНТ 1: Копируем в C-строки =====
    std::cout << "\n--- ВАРИАНТ 1 (C-строки) ---\n";
    char c_words[MAX_WORDS][WORD_LEN + 1];
    
    // Копируем из string в char[]
    for (int i = 0; i < n; ++i) {
        strncpy(c_words[i], temp[i].c_str(), WORD_LEN);
        c_words[i][WORD_LEN] = '\0';  // гарантируем завершающий ноль
    }
    
    std::cout << "Слова с чётными номерами:\n";
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            std::cout << c_words[i] << std::endl;
        }
    }
    
    // ===== ВАРИАНТ 2: Просто используем string =====
    std::cout << "\n--- ВАРИАНТ 2 (C++-строки) ---\n";
    std::cout << "Слова с чётными номерами:\n";
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            std::cout << temp[i] << std::endl;
        }
    }
    
    return 0;
}