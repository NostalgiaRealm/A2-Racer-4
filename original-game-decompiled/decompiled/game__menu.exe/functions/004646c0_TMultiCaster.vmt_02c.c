
/* ==== TMultiCaster.vmt_02c @ 004646c0 ==== 
 * signature: int * __register TMultiCaster.vmt_02c(int * param_1, char param_2, int * param_3)
 * body: 004646c0-004647fe
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TMultiCaster_vmt_02c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *extraout_ECX;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  puVar2 = PTR_DAT_004ab8ac;
  TComponent_vmt_02c(param_1,'\0',param_3);
  piVar3 = FUN_0041fefc((int *)&PTR_TList_vmt_000_0041fe0c,'\x01',0);
  param_1[9] = (int)piVar3;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xac) = param_1;
  *(code **)(iVar1 + 0xa8) = FUN_00464904;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xb4) = param_1;
  *(code **)(iVar1 + 0xb0) = FUN_0046497c;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xec) = param_1;
  *(code **)(iVar1 + 0xe8) = FUN_004649f4;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xe4) = param_1;
  *(code **)(iVar1 + 0xe0) = FUN_00464a68;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xbc) = param_1;
  *(code **)(iVar1 + 0xb8) = FUN_00464adc;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xcc) = param_1;
  *(code **)(iVar1 + 200) = FUN_00464b54;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xd4) = param_1;
  *(code **)(iVar1 + 0xd0) = FUN_00464bf0;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xdc) = param_1;
  *(code **)(iVar1 + 0xd8) = FUN_00464c64;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xc4) = param_1;
  *(code **)(iVar1 + 0xc0) = FUN_00464cdc;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xf4) = param_1;
  *(code **)(iVar1 + 0xf0) = FUN_00464d54;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0xfc) = param_1;
  *(code **)(iVar1 + 0xf8) = FUN_00464dc8;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0x10c) = param_1;
  *(code **)(iVar1 + 0x108) = FUN_00464eb4;
  iVar1 = *(int *)puVar2;
  *(int **)(iVar1 + 0x104) = param_1;
  *(code **)(iVar1 + 0x100) = FUN_00464e3c;
  if (cVar4 != '\0') {
    FUN_004032f4(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}


