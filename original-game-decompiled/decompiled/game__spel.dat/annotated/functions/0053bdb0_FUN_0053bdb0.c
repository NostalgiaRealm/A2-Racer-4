
/* ==== FUN_0053bdb0 @ 0053bdb0 ==== 
 * signature: int __fastcall FUN_0053bdb0(int param_1)
 * body: 0053bdb0-0053bf00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0053bdb0(int param_1)

{
  int iVar1;
  int local_83c [522];
  undefined4 local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057424b;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 0x138);
  if (*(int *)(param_1 + 0x78) == iVar1) {
    return 4;
  }
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x78) = iVar1;
  local_14 = 0;
  local_4 = 0;
  local_83c[1] = 0;
  local_83c[0] = param_1;
  while( true ) {
    iVar1 = (*(code *)(&DAT_0074d650)
                      [(int)*(short *)(local_83c[0] + 0x32 +
                                      ((*(uint *)(local_83c[0] + 0x14) ^ 0x100) >> 8 & 3) * 0x1c) +
                       *(short *)(local_83c[0] + 0x32 +
                                 (*(uint *)(local_83c[0] + 0x14) >> 8 & 3) * 0x1c) * 4])(local_83c);
    if (iVar1 == 1) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffff3fff;
      ExceptionList = local_c;
      return 1;
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffff7fff | 0x4000;
    if (iVar1 == 2) break;
    if (iVar1 == 3) {
      FUN_0053bd50(local_83c);
      break;
    }
    _DAT_00000000 = 0;
  }
  if (((*(uint *)(param_1 + 0x14) & 0x3000) != 0x1000) &&
     ((*(uint *)(param_1 + 0x14) & 0x3c0000) != 0x100000)) {
    FUN_0053bd30(param_1);
  }
  ExceptionList = local_c;
  return iVar1;
}


