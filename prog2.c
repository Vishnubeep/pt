#include <stdio.h>
int main(){
    int cocoon_wt;
    double renditta, raw_silk_price, wage_cost_per_kg_cocoon;
    scanf("%d %lf %lf %lf", &cocoon_wt, &renditta, &raw_silk_price, &wage_cost_per_kg_cocoon);
    double raw_silk_wt = (double) cocoon_wt/renditta;
    double gross_revenue = raw_silk_wt * raw_silk_price;
    double wage_cost = raw_silk_wt * wage_cost_per_kg_cocoon;
    double net_margin = gross_revenue - wage_cost;
    printf("Raw silk (kg): %.2f\n", raw_silk_wt);
    printf("Gross revenue (Rs.): %.2f\n", gross_revenue);
    printf("Wage cost (Rs.): %.2f\n", wage_cost);
    printf("Net margin (Rs.): %.2f\n", net_margin);
    return 0;
}