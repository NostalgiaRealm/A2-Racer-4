
/* ==== FUN_00432d20 @ 00432d20 ==== 
 * signature: undefined __stdcall FUN_00432d20(void)
 * body: 00432d20-00432e79;00432e7d-00432eda
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00432e7a-00432e7c
 */

void FUN_00432d20(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  LPCSTR pCVar4;
  FILE *pFVar5;
  undefined1 local_2c [4];
  LPCSTR local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056a3a0;
  local_c = ExceptionList;
  local_28 = (LPCSTR)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00432c70();
  do {
    do {
      iVar2 = FUN_004c5e40(0x43);
    } while (iVar2 != 0);
    iVar2 = FUN_004c5e40(0x11);
  } while ((iVar2 != 0) || (iVar2 = FUN_004c5e40(0x20), iVar2 != 0));
  iVar2 = FUN_00431c20(8);
  while (1 < iVar2) {
    switch(iVar2) {
    case 2:
      FUN_00432990();
      break;
    case 3:
      FUN_00431e20();
      break;
    case 4:
      FUN_00432430();
      break;
    case 5:
      FUN_00432640();
      break;
    case 6:
      FUN_00432760();
    }
    FUN_00432c70();
    iVar2 = FUN_00431c20(8);
  }
  if (iVar2 == 0) {
    puVar3 = FUN_0049df90(local_1c,(byte *)s_PHYS_d_DAT_00598974);
    local_4._0_1_ = 1;
    FUN_004093c0(local_2c,puVar3,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    pCVar4 = local_28;
    if (local_28 == (LPCSTR)0x0) {
      pCVar4 = "";
    }
    pFVar5 = (FILE *)FUN_005589a5(pCVar4,&DAT_00598980);
    if (pFVar5 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s___s___d_Could_not_save__s_file_005989a8);
    }
    FUN_00558c1d(&DAT_006c1c68,0xf0,0x14,(int *)pFVar5);
    FUN_005588fd(pFVar5);
  }
  if (local_28 != (LPCSTR)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_28[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}


