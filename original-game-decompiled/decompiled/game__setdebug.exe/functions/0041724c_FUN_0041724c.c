
/* ==== FUN_0041724c @ 0041724c ==== 
 * signature: undefined __register FUN_0041724c(int * param_1, undefined * param_2, LPSIZE param_3)
 * body: 0041724c-00417288
 */

void FUN_0041724c(int *param_1,undefined *param_2,LPSIZE param_3)

{
  int c;
  LPCSTR lpString;
  
  FUN_00417504(param_1,3);
  param_3->cx = 0;
  param_3->cy = 0;
  c = FUN_00403c38((int)param_2);
  lpString = FUN_00403dfc(param_2);
  GetTextExtentPoint32A((HDC)param_1[1],lpString,c,param_3);
  return;
}


