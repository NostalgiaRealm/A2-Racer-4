
/* ==== FUN_004290f0 @ 004290f0 ==== 
 * signature: undefined __stdcall FUN_004290f0(void)
 * body: 004290f0-00429183;00429187-004291c7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00429184-00429186
 */

void FUN_004290f0(void)

{
  char cVar1;
  LPCSTR pCVar2;
  FILE *pFVar3;
  undefined1 local_1c [4];
  LPCSTR local_18;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a162;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049df90(local_1c,PTR_s_VDYNS_DAT_005962ec);
  local_4 = 0;
  pCVar2 = local_18;
  if (local_18 == (LPCSTR)0x0) {
    pCVar2 = "";
  }
  pFVar3 = (FILE *)FUN_005589a5(pCVar2,&DAT_005965e0);
  if (pFVar3 != (FILE *)0x0) {
    FUN_00558b35((char *)&DAT_006b2bc0,0x268,100,(int *)pFVar3);
    FUN_005588fd(pFVar3);
    if (local_18 != (LPCSTR)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_0054b339(local_18 + -1);
    }
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Could_not_open_file__s_00596608);
}


