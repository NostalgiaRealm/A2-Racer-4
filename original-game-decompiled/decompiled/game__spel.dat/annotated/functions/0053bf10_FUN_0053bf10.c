
/* ==== FUN_0053bf10 @ 0053bf10 ==== 
 * signature: int __fastcall FUN_0053bf10(void * param_1)
 * body: 0053bf10-0053c039
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0053bf10(void *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  void *local_83c;
  undefined4 local_838;
  undefined4 local_14;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0057426b;
  local_c = ExceptionList;
  iVar3 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x28) + 0x18) + 0x138);
  if (*(int *)((int)param_1 + 0x78) == iVar3) {
    iVar2 = 4;
  }
  else {
    ExceptionList = &local_c;
    *(int *)((int)param_1 + 0x78) = iVar3;
    local_14 = 0;
    local_838 = 0x14;
    local_4 = 0;
    iVar3 = 0;
    local_83c = param_1;
    do {
      while( true ) {
        sVar1 = *(short *)((int)local_83c +
                          (*(uint *)((int)local_83c + 0x14) >> 8 & 3) * 0x1c + 0x32);
        iVar2 = FUN_0053cc60(local_83c,1);
        iVar2 = (*(code *)(&DAT_0074d650)[(int)*(short *)(iVar2 + 0x1a) + sVar1 * 4])(&local_83c);
        if (iVar2 == 1) {
          *(uint *)((int)param_1 + 0x14) = *(uint *)((int)param_1 + 0x14) & 0xffff3fff;
          ExceptionList = local_c;
          return 1;
        }
        *(uint *)((int)param_1 + 0x14) = *(uint *)((int)param_1 + 0x14) & 0xffff7fff | 0x4000;
        if (iVar2 == 2) goto LAB_0053bffa;
        if (iVar2 == 3) break;
        _DAT_00000000 = 0;
      }
      FUN_0053bd50((int *)&local_83c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
LAB_0053bffa:
    if (((*(uint *)((int)param_1 + 0x14) & 0x3000) != 0x1000) &&
       ((*(uint *)((int)param_1 + 0x14) & 0x3c0000) != 0x100000)) {
      FUN_0053bd30((int)param_1);
    }
  }
  ExceptionList = local_c;
  return iVar2;
}


