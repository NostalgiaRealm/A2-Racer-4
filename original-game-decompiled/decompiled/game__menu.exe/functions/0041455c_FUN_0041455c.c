
/* ==== FUN_0041455c @ 0041455c ==== 
 * signature: undefined __register FUN_0041455c(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0041455c-00414596;004145e3-00414746
 */

void FUN_0041455c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  bVar1 = FUN_00413704(*(int *)(param_4 + -4),param_2,0);
  switch(bVar1) {
  case 0:
  case 0xd:
    uVar2 = FUN_00414ec4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    if ((char)uVar2 == '\r') {
      FUN_004049ec((VARIANTARG *)local_14);
    }
    else {
      FUN_00404a30((VARIANT *)local_14,(VARIANTARG *)PTR_DAT_004ab628);
    }
    break;
  default:
    piVar4 = FUN_0040b694((int *)&DAT_0040e6dc,'\x01',(undefined4 *)PTR_PTR_004ab99c);
    FUN_004036f4(piVar4);
    break;
  case 2:
    iVar3 = FUN_004140e4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14[8] = (char)iVar3;
    break;
  case 3:
    iVar3 = FUN_004140e4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_2_ = (short)iVar3;
    break;
  case 4:
    iVar3 = FUN_004140e4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_4_ = iVar3;
    break;
  case 5:
    FUN_00413ed8(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)in_ST0;
    break;
  case 6:
  case 0xc:
    FUN_00414e1c(*(int *)(param_4 + -4),(int *)&local_18,extraout_ECX);
    FUN_00404edc((VARIANTARG *)local_14,local_18);
    break;
  case 8:
  case 9:
    uVar2 = FUN_00414ec4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_2_ = -(ushort)((char)uVar2 == '\t');
    break;
  case 0xf:
    FUN_00413f18(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_4_ = (float)in_ST0;
    break;
  case 0x10:
    FUN_00413f58(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)ROUND(in_ST0);
    break;
  case 0x11:
    FUN_00413fa4(*(int *)(param_4 + -4),extraout_EDX,extraout_ECX);
    local_14._8_8_ = (undefined8)in_ST0;
    break;
  case 0x12:
    FUN_00414e7c(*(int *)(param_4 + -4),(int *)&local_1c,extraout_ECX);
    FUN_00404f1c((VARIANTARG *)local_14,local_1c);
  }
  local_14._0_2_ = *(undefined2 *)(&DAT_004aa328 + (uint)bVar1 * 4);
  FUN_0040e2b0(*(int **)(param_4 + -8),*(int *)(param_4 + -0xc),(VARIANTARG *)local_14);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0041474e;
  pcStack_28 = (code *)0x414736;
  FUN_004042b4(&local_1c);
  pcStack_28 = (code *)0x41473e;
  FUN_00403c5c((int *)&local_18);
  pcStack_28 = (code *)0x414746;
  FUN_00405038((VARIANTARG *)local_14);
  return;
}


