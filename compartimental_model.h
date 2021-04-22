//
// Created by popcorn on 01/01/2021.
//

#ifndef COMPARTIMENTAL_MODEL_H
#define COMPARTIMENTAL_MODEL_H

#endif //COMPARTIMENTAL_MODEL_H

std::vector<std::vector<int> >
compartimental_model(int nSteps, int N, int number_of_Households, int mean_number_of_people_in_one_Household,
                         double beta1, double beta2, double threshold_above_which_one_to_two,
                         double threshold_under_which_two_to_one, double betaH, double ny, double gamma,
                         std::vector<double> &temp, std::vector<double> &time_lockdown);