
/* ==== FUN_00550718 @ 00550718 ==== 
 * signature: undefined __stdcall FUN_00550718(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * body: 00550718-005507e9
 */

void FUN_00550718(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_50 [68];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_005587a3(local_50,&DAT_005b70a0);
  iVar2 = *(int *)(param_4 + 0x14);
  if ((iVar2 < 1) || (iVar2 <= iVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar1;
  }
  local_c = param_2;
  local_8 = param_3;
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_00551357(&local_c,param_5);
    }
    iVar2 = 0;
    param_2 = local_c;
    param_3 = local_8;
  }
  pcVar4 = local_50;
  local_c = param_2;
  local_8 = param_3;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar3 = FUN_0054ef7c((int)*pcVar4);
    FUN_00551357(&local_c,uVar3);
    pcVar4 = pcVar4 + 1;
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  param_2 = local_c;
  param_3 = local_8;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_00551357(&param_2,param_5);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


