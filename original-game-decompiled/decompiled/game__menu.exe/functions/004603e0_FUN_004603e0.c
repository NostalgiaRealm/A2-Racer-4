
/* ==== FUN_004603e0 @ 004603e0 ==== 
 * signature: undefined __register FUN_004603e0(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int * param_4, int * param_5)
 * body: 004603e0-004604bf
 */

void FUN_004603e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 int *param_5)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  char **ppcVar5;
  int *piVar6;
  code *pcStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int local_14;
  char *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = (char *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  pcStack_28 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_28;
  piVar6 = param_4;
  local_c = param_3;
  local_8 = param_2;
  (**(code **)*param_1)(param_1,param_2,param_3,param_4,0);
  FUN_00403cf4((int *)&local_10,*param_4);
  (**(code **)(*param_5 + 0x40))();
  iVar1 = FUN_004041c8((char *)FUN_004604d8,local_10);
  while (iVar1 != 0) {
    piVar4 = &local_14;
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      thunk_FUN_00402808((uint)piVar4);
      uVar2 = extraout_ECX;
    }
    FUN_004040e4((int)local_10,0,uVar2,piVar4);
    (**(code **)(*param_5 + 0x34))(param_5,local_14);
    ppcVar5 = &local_10;
    uVar2 = FUN_00403edc((int)local_10);
    iVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402808(uVar2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    FUN_004040e4((int)local_10,iVar3,uVar2,(int *)ppcVar5);
    iVar1 = FUN_004041c8((char *)FUN_004604d8,local_10);
  }
  (**(code **)(*param_5 + 0x34))(param_5,local_10);
  *in_FS_OFFSET = piVar6;
  pcStack_28 = FUN_004604c7;
  FUN_00403c80(&local_14,2);
  return;
}


