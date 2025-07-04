#include <iomanip>
#include <iostream>
#include <string>

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06,
                 double shipping = 3.50);

void greeting(std::string name, std::string prefix = "Mr.",
              std::string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping) {
  return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(std::string name, std::string prefix, std::string suffix) {
  std::cout << "Hello " << prefix + " " + name + " " + suffix << std::endl;
}

int main() {
  double cost{0};
  cost = calc_cost(100.0, 0.08, 4.25);  // will use no defaults  100 + 8 + 4.25

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Cost is: " << cost << std::endl;  // 112.25

  cost = calc_cost(100.0, 0.08);  // will use default shipping  100 + 8 + 3.50
  std::cout << "Cost is: " << cost << std::endl;  // 111.50

  cost =
      calc_cost(200.0);  // will use default tax and shipping   200 + 12 + 3.50
  std::cout << "Cost is: " << cost << std::endl;  // 215.50

  cost = calc_cost();
  std::cout << "Cost is: " << cost << std::endl;  // 100 + 6 + 3.50

  greeting("Glenn Jones", "Dr.", "M.D.");
  greeting("James Rogers", "Professor", "Ph.D.");
  greeting("Frank Miller", "Dr.");
  greeting("William Smith");
  greeting("Mary Howard", "Mrs.", "Ph.D.");

  std::cout << std::endl;
  return 0;
}
