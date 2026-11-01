
/* ==== FUN_0053f110 @ 0053f110 ==== 
 * signature: float10 __stdcall FUN_0053f110(double param_1, double param_2, double param_3, double param_4)
 * body: 0053f110-0053f140
 */

float10 FUN_0053f110(double param_1,double param_2,double param_3,double param_4)

{
  return ((float10)1.0 / ((float10)param_2 + (float10)param_3)) *
         ((float10)param_1 -
         SQRT(ABS((float10)param_1 * (float10)param_1 -
                  ((float10)param_4 + (float10)param_4) * ((float10)param_2 + (float10)param_3))));
}


