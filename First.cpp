#include <iostream>
#include <vector>

int main() {
    double g;
    std::vector<std::vector<double>> Grades;
    std::vector<double> temp;
    
    for (int r = 0; r < 4; r++) {
        std::cout << "Student # " << (r + 1) << std::endl;
        
        for (int c = 0; c < 4; c++) {
            std::cout << "Enter Grade: " << (c + 1) << " ==> ";
            std::cin >> g;
            temp.push_back(g);
        }
        
        Grades.push_back(temp);
        temp.clear();
    }
    
    std::cout << "Printing Vector" << std::endl;
    
    for (int r = 0; r < Grades.size(); r++) {
        std::cout << "Student # " << (r + 1) << "\t";
        
        for (int c = 0; c < Grades[r].size(); c++) {
            std::cout << Grades[r][c] << "\t";
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}
