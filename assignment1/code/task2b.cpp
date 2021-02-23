#include <iostream>
#include <vector>

int8_t get_min(int8_t a, int8_t b);
uint8_t get_max(uint8_t a, uint8_t b);
uint8_t get_max(uint8_t a, uint8_t b) {
  uint8_t c = a > b ? a : b;
  return c;
}

int8_t get_min(int8_t a, int8_t b) {
  int8_t  c = a < b ? b : a;
  return c;
}

int main() {
  std::vector<uint8_t> v(128, 63);
  v[127] <<=2 ;
  uint8_t max = 0u;
  
  for(auto e : v){
    max = get_max(max, e);
  }
  int8_t min = 255;
  for(auto e : v){
    min = get_min(min, static_cast<uint8_t> (e));
  }
  std::cout << "Maximum unsigned: " << std::to_string(max) << std::endl;
  std::cout << "Minimum signed: " << std::to_string(min) << std::endl;
  return 0;
}
