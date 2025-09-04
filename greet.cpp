#include <iostream>
#include <string>
#include <vector>

void greet(const std::string& name) {
    std::cout << "Откликайся скорее, " << name << "!" << std::endl;
}

void extraCallToAction() {
    std::cout << "Не упусти шанс откликнуться!" << std::endl;
    std::cout << "Скорее присылай отклик!" << std::endl;
}

void multipleGreetings(const std::vector<std::string>& names) {
    for (const auto& name : names) {
        greet(name);
        extraCallToAction();
    }
}

int main() {
    std::vector<std::string> team = {"друг", "команда", "соискатель", "разработчик", "Linux мастер"};
    
    // Повторяем несколько раз для увеличения строк
    for (int i = 0; i < 3; ++i) {
        multipleGreetings(team);
    }
    
    // Дополнительные индивидуальные призывы
    greet("геймер");
    extraCallToAction();
    greet("кодер");
    extraCallToAction();
    greet("тестировщик");
    extraCallToAction();
    
    return 0;
}
