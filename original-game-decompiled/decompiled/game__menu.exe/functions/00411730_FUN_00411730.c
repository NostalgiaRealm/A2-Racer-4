
/* ==== FUN_00411730 @ 00411730 ==== 
 * signature: undefined __register FUN_00411730(int * param_1, undefined4 param_2, int * param_3)
 * body: 00411730-0041176c
 */

void FUN_00411730(int *param_1,undefined4 param_2,int *param_3)

{
  PCNZCH pCVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  pCVar1 = FUN_0040c0d8(&DAT_00411778,(undefined *)*param_3);
  if (pCVar1 == (PCNZCH)0x0) {
    FUN_00404210(param_3,0);
  }
  else {
    FUN_00404210(param_3,(uint)(pCVar1 + -1));
  }
  return;
}


