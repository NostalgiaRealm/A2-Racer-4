
/* ==== FUN_00408330 @ 00408330 ==== 
 * signature: undefined __register FUN_00408330(undefined * param_1, int * param_2)
 * body: 00408330-00408362
 */

void FUN_00408330(undefined *param_1,int *param_2)

{
  uint cchLength;
  undefined4 *puVar1;
  
  cchLength = FUN_00403edc((int)param_1);
  puVar1 = (undefined4 *)FUN_004040a0(param_1);
  FUN_00403d44(param_2,puVar1,cchLength);
  if (0 < (int)cchLength) {
    CharLowerBuffA((LPSTR)*param_2,cchLength);
  }
  return;
}


