
/* ==== FUN_00453d0c @ 00453d0c ==== 
 * signature: undefined __register FUN_00453d0c(int * param_1, char param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
 * body: 00453d0c-00453e45
 */

void FUN_00453d0c(int *param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined1 uVar3;
  undefined4 *extraout_EDX;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  code *pcStackY_34;
  code *pcStackY_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  uVar3 = 0;
  if (param_2 != '\0') {
    pcStackY_30 = (code *)0x453d24;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    uVar3 = extraout_DL;
  }
  uStack_8 = CONCAT13(uVar3,(undefined3)uStack_8);
  pcStackY_34 = thunk_FUN_004036bc;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  pcStackY_30 = (code *)&stack0xfffffffc;
  FUN_00403cf4((int *)&local_c,(int)param_3);
  if (param_3 != (undefined4 *)0x0) {
    iVar1 = 0;
    if (param_6[-1] == 0) {
      iVar1 = thunk_FUN_00402808(0);
    }
    if (*(char *)((int)param_6 + iVar1) != '.') {
      FUN_00403ee4((int *)&local_c,(undefined4 *)&DAT_00453e78);
    }
  }
  FUN_00408448((int)param_6,(int *)&local_10);
  FUN_00403ee4((int *)&local_c,local_10);
  iVar1 = FUN_00403edc((int)local_c);
  uVar2 = iVar1 - 1;
  puVar4 = local_c;
  if ((uint)local_c[-1] <= uVar2) {
    uVar2 = thunk_FUN_00402808(uVar2);
    puVar4 = extraout_EDX;
  }
  if (*(char *)((int)puVar4 + uVar2) == ':') {
    FUN_00403ee4((int *)&local_c,(undefined4 *)&DAT_00453e84);
  }
  else {
    FUN_00403ee4((int *)&local_c,(undefined4 *)FUN_00453e90);
  }
  FUN_00403ee4((int *)&local_c,param_5);
  FUN_0040b5d8(param_1,'\0',local_c);
  (**(code **)*param_1)();
  FUN_00403cb0(param_1 + 3,param_3);
  FUN_00403cb0(param_1 + 4,param_5);
  FUN_00403cb0(param_1 + 5,param_6);
  if (param_4 == (undefined4 *)0x0) {
    if (param_5 == (undefined4 *)0x0) {
      FUN_00403cb0(param_1 + 6,local_c);
    }
    else {
      FUN_00403cb0(param_1 + 6,param_5);
    }
  }
  else {
    FUN_00403cb0(param_1 + 6,param_4);
  }
  *in_FS_OFFSET = uStackY_38;
  pcStackY_30 = FUN_00453e4d;
  pcStackY_34 = (code *)0x453e45;
  FUN_00403c80((int *)&local_10,2);
  return;
}


