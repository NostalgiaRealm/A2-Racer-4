
/* ==== FUN_004129a8 @ 004129a8 ==== 
 * signature: undefined __register FUN_004129a8(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 004129a8-004129e2;00412a2f-00412b92
 */

void FUN_004129a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  OLECHAR *local_1c;
  undefined4 *local_18;
  undefined1 local_14 [16];
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_14._8_8_ = (_union_2685)0x0;
  local_14._4_4_ = 0;
  local_14._0_4_ = 0;
  local_18 = (undefined4 *)0x0;
  local_1c = (OLECHAR *)0x0;
  pcStack_28 = thunk_FUN_00403434;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = FUN_00411b50(*(int *)(param_4 + -4),param_2,0);
  switch(bVar1) {
  case 0:
  case 0xd:
    uVar2 = FUN_00413310(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    if ((char)uVar2 == '\r') {
      FUN_004046cc((VARIANTARG *)local_14);
    }
    else {
      FUN_00404710((VARIANT *)local_14,(VARIANTARG *)PTR_DAT_00446a94);
    }
    break;
  default:
    piVar4 = FUN_0040a9f4((int *)&DAT_0040d61c,'\x01',(undefined4 *)PTR_PTR_00446d34);
    FUN_0040346c(piVar4);
    break;
  case 2:
    iVar3 = FUN_00412530(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14[8] = (char)iVar3;
    break;
  case 3:
    iVar3 = FUN_00412530(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_2_ = (short)iVar3;
    break;
  case 4:
    iVar3 = FUN_00412530(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_4_ = iVar3;
    break;
  case 5:
    FUN_00412324(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)in_ST0;
    break;
  case 6:
  case 0xc:
    FUN_00413268(*(int *)(param_4 + -4),(int *)&local_18,extraout_ECX);
    FUN_00404a54((VARIANTARG *)local_14,local_18);
    break;
  case 8:
  case 9:
    uVar2 = FUN_00413310(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_2_ = -(ushort)((char)uVar2 == '\t');
    break;
  case 0xf:
    FUN_00412364(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_4_ = (float)in_ST0;
    break;
  case 0x10:
    FUN_004123a4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)ROUND(in_ST0);
    break;
  case 0x11:
    FUN_004123f0(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)in_ST0;
    break;
  case 0x12:
    FUN_004132c8(*(int *)(param_4 + -4),(int *)&local_1c,extraout_ECX);
    FUN_00404a94((VARIANTARG *)local_14,local_1c);
  }
  local_14._0_2_ = *(undefined2 *)(&DAT_00446304 + (uint)bVar1 * 4);
  FUN_0040d210(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc),(VARIANTARG *)local_14);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00412b9a;
  pcStack_28 = (code *)0x412b82;
  FUN_00403fe8(&local_1c);
  pcStack_28 = (code *)0x412b8a;
  FUN_004039b8((int *)&local_18);
  pcStack_28 = (code *)0x412b92;
  FUN_00404ac8((VARIANTARG *)local_14);
  return;
}


