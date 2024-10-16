#include <stdio.h>
#include <stdbool.h>

int main(){ 
    double initialValuation = 1054474.72;
    double initialYear = 2024;
    double Return = 0.11;
    double initialContribution = 10000;
    double inflation = 0.025;
    double contributionGrowth = 0.04;
    double valuation = initialValuation;
    double initialDistribution = 77800;
    double year = initialYear;
    double retirementYear = 2075;
    double contribution = initialContribution;
    double distribution = initialDistribution;

    while(year <= retirementYear){
        if(year == 2024){
            valuation = valuation * (1 + Return);
            valuation = valuation - 0.2 * distribution;
        }
        else if (year == 2025){
            valuation = valuation + 213000 + contribution;
            valuation = valuation * (1 + Return);
            valuation = valuation - distribution;
        }
        else{
            valuation = valuation + contribution;
            valuation = valuation * (1 + Return);
            valuation = valuation - distribution;
        }

        contribution = contribution * (1 + contributionGrowth);
        distribution = distribution * (1 + inflation);
        year = year + 1;
        printf("%f\n", valuation);
    }
    return 0;
}