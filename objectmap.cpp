#include "objectmap.hpp"



//цветовых представлений различных материалов
QColor color_material[(int) type_material::COUNT_MATERIAL] = {
        QColor(0, 0, 0), QColor(220, 220, 220), QColor(150, 150, 170), QColor(10, 10, 10),
        QColor(139, 69, 19), QColor(213, 176, 124)};
double calculation_no_material(double f){
    return 0.0;
}


//стекло
double calculation_glass(double f){
    return 2.0 + 0.2 * f;
}


double calculation_IRR_glass(double f){
    return 23.0 + 0.3 * f;
}

//бетон
double calculation_concrete(double f){
    return 5.0 + 4.0 * f;
}

//дерево
double calculation_wood(double f){
    return 4.85 + 0.12 * f;
}

//гипсокарто
double calculation_drywall(double f){
    return 5 + 0.12 * f;
}


double (*attenuation_material[(int)type_material::COUNT_MATERIAL])(double) = {
        calculation_no_material, calculation_IRR_glass, calculation_glass, calculation_concrete, calculation_wood, calculation_drywall
    };
