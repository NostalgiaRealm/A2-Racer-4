
/* ==== TMultiCaster.Destroy @ 00464800 ==== 
 * signature: undefined TMultiCaster.Destroy(void)
 * body: 00464800-00464901
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TMultiCaster_Destroy(int *param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  byte extraout_DL;
  
  piVar3 = FUN_004032fc(param_1,param_2);
  puVar2 = PTR_DAT_004ab8ac;
  iVar1 = *(int *)PTR_DAT_004ab8ac;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  *(undefined4 *)(iVar1 + 0xac) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xe8) = 0;
  *(undefined4 *)(iVar1 + 0xec) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 200) = 0;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  *(undefined4 *)(iVar1 + 0xc4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  iVar1 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  FUN_00402f9c((int *)piVar3[9]);
  TComponent_Destroy(piVar3,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_004032ec(piVar3);
  }
  return;
}


