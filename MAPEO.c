float mapeo_variable(int valor) {
    // Rango del valor original (0 a 1023)
    float valor_min_original = 0;
    float valor_max_original = 255;
    
    // Rango del valor deseado (0 a 5.00)
    float valor_min_deseado = 0;
    float valor_max_deseado = 5.0;
    
    // Cálculo del mapeo
    float valor_mapeado = (valor - valor_min_original) * (valor_max_deseado - valor_min_deseado) / (valor_max_original - valor_min_original) + valor_min_deseado;
    
    return valor_mapeado;
}
