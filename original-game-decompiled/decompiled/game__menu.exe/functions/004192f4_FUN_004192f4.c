
/* ==== FUN_004192f4 @ 004192f4 ==== 
 * signature: undefined __register FUN_004192f4(int * param_1, undefined * param_2, LPSIZE param_3)
 * body: 004192f4-00419330
 */

void FUN_004192f4(int *param_1,undefined *param_2,LPSIZE param_3)

{
  int c;
  LPCSTR lpString;
  
  FUN_004195ac(param_1,3);
  param_3->cx = 0;
  param_3->cy = 0;
  c = FUN_00403edc((int)param_2);
  lpString = FUN_004040a0(param_2);
  GetTextExtentPoint32A((HDC)param_1[1],lpString,c,param_3);
  return;
}


