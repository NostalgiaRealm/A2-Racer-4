
/* ==== FUN_00475860 @ 00475860 ==== 
 * signature: undefined __thiscall FUN_00475860(void * this, undefined4 param_1, char * param_2)
 * body: 00475860-00475943;00475947-004759d9;00475aeb-00475b44
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00475944-00475946
 */

void __thiscall FUN_00475860(void *this,undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  HANDLE pvVar5;
  LPCSTR pCVar6;
  char *pcVar7;
  uint local_2ac [70];
  uint local_194 [70];
  undefined1 local_7c [88];
  undefined1 local_24 [4];
  LPCSTR local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  int local_8;
  
  pcStack_c = FUN_0056b50c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd48;
  local_8 = 0;
  pcVar3 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar3 = "";
  }
  ExceptionList = &local_10;
  pcVar3 = _strrchr(pcVar3,0x2e);
  if (pcVar3 != (char *)0x0) {
    pcVar7 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar7 = "";
    }
    puVar4 = FUN_00479520(&param_1,local_7c,0,(int)pcVar3 - (int)pcVar7);
    local_8._0_1_ = 1;
    FUN_004796b0(local_24,puVar4,(char *)&PTR_DAT_005a8ea8);
    local_8._0_1_ = 3;
    FUN_004028f0(local_7c,'\x01');
    pcVar3 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar3 = "";
    }
    pvVar5 = FUN_005590ff(pcVar3,local_194);
    if (pvVar5 == (HANDLE)0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s_Scriptfile_not_found__s_005a8eac);
    }
    FUN_005591c9(pvVar5);
    pCVar6 = local_20;
    if (local_20 == (LPCSTR)0x0) {
      pCVar6 = "";
    }
    pvVar5 = FUN_005590ff(pCVar6,local_2ac);
    local_8._0_1_ = 4;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 4;
    if (pvVar5 != (HANDLE)0xffffffff) {
      local_8._0_1_ = uVar2;
      FUN_004cf720(this,(undefined1 *)&param_1);
      if (local_20 != (LPCSTR)0x0) {
        cVar1 = local_20[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_0054b339(local_20 + -1);
        }
        else {
          local_20[-1] = cVar1 + -1;
        }
      }
      local_20 = (LPCSTR)0x0;
      local_1c = 0;
      local_18 = 0;
      if (param_2 != (char *)0x0) {
        cVar1 = param_2[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          param_2[-1] = cVar1 + -1;
          ExceptionList = local_10;
          return;
        }
        FUN_0054b339(param_2 + -1);
      }
      ExceptionList = local_10;
      return;
    }
    FUN_005591c9((HANDLE)0xffffffff);
    FUN_004cf720(this,(undefined1 *)&param_1);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004028f0(local_24,'\x01');
  }
  local_8 = 0xffffffff;
  FUN_004028f0(&param_1,'\x01');
  ExceptionList = local_10;
  return;
}


