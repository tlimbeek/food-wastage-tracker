#ifndef FOOD_WASTAGE_REPORT_H_
#define FOOD_WASTAGE_REPORT_H_

#include <iostream>
#include <vector>

#include "food_wastage_record.h"
// Theresa Limbeek
// CPSC 121L-14
// 11-23-23
// tlimbeek@csu.fullerton.edu
// tlimbeek

class FoodWastageReport {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  FoodWastageReport(const std::vector<FoodWastageRecord>& food_wastage_records)
      : food_wastage_records_{food_wastage_records} {}

  // TODO: count number of instances of strings in vectors and
  // return most recurring
  const std::vector<std::string>& MostWastedFoods() const {
    return most_wasted_foods_;
  }
  const std::vector<std::string>& MostCostlyMeals() const {
    return most_costly_meals_;
  }
  const std::vector<std::string>& CommonWastageReasons() const {
    return common_wastage_reasons_;
  }
  const std::vector<std::string>& CommonDisposalMethods() const {
    return common_disposal_methods_;
  }
  const std::vector<std::string>& ReductionStrategies() const {
    return reduction_strategies_;
  }
  double TotalCost() const { return total_cost_; }

 private:
  const std::vector<FoodWastageRecord>& food_wastage_records_;
  std::vector<std::string> most_wasted_foods_;
  std::vector<std::string> most_costly_meals_;
  std::vector<std::string> common_wastage_reasons_;
  std::vector<std::string> common_disposal_methods_;
  std::vector<std::string> reduction_strategies_;
  double total_cost_;
};

#endif