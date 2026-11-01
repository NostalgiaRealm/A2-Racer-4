
/* ==== FUN_00404124 @ 00404124 ==== 
 * signature: undefined __register FUN_00404124(int * param_1, UINT param_2)
 * body: 00404124-00404164
 */

void FUN_00404124(int *param_1,UINT param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (0 < (int)param_2) {
    puVar2 = (undefined4 *)FUN_0040410c(param_2);
    uVar1 = FUN_00404100(*param_1);
    if (0 < (int)uVar1) {
      if ((int)param_2 < (int)uVar1) {
        uVar1 = param_2;
      }
      FUN_004027d0((undefined4 *)*param_1,puVar2,uVar1 * 2);
    }
  }
  FUN_00403fd8(param_1,puVar2);
  return;
}


