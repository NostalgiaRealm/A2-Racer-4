
/* ==== FUN_004089d4 @ 004089d4 ==== 
 * signature: undefined __register FUN_004089d4(undefined * param_1, int * param_2)
 * body: 004089d4-00408a22
 */

void FUN_004089d4(undefined *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00408950(&DAT_00408a2c,param_1);
  if ((1 < (int)uVar1) && (param_1[uVar1 - 1] == '\\')) {
    if ((param_1[uVar1 - 2] == ':') || (param_1[uVar1 - 2] == '\\')) {
      uVar2 = FUN_0040beec(param_1,uVar1 - 1);
      if ((char)uVar2 != '\x02') goto LAB_00408a10;
    }
    uVar1 = uVar1 - 1;
  }
LAB_00408a10:
  FUN_004040e4((int)param_1,1,uVar1,param_2);
  return;
}


