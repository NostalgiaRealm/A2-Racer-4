
/* ==== FUN_00407af4 @ 00407af4 ==== 
 * signature: undefined __register FUN_00407af4(undefined * param_1, int * param_2)
 * body: 00407af4-00407b26
 */

void FUN_00407af4(undefined *param_1,int *param_2)

{
  uint cchLength;
  undefined4 *puVar1;
  
  cchLength = FUN_00403c38((int)param_1);
  puVar1 = (undefined4 *)FUN_00403dfc(param_1);
  FUN_00403aa0(param_2,puVar1,cchLength);
  if (0 < (int)cchLength) {
    CharLowerBuffA((LPSTR)*param_2,cchLength);
  }
  return;
}


