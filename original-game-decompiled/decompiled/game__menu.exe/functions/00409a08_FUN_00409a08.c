
/* ==== FUN_00409a08 @ 00409a08 ==== 
 * signature: undefined __register FUN_00409a08(int param_1, int * param_2, undefined4 param_3, int param_4)
 * body: 00409a08-00409b59
 */

void FUN_00409a08(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  LPCSTR lpFormat;
  LCID Locale;
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int iVar2;
  int *piVar3;
  undefined4 uStack_130;
  code *pcStack_12c;
  code *pcStack_128;
  undefined4 local_11c;
  CHAR local_118 [256];
  SYSTEMTIME local_18;
  undefined *local_8;
  
  pcStack_128 = (code *)&stack0xfffffffc;
  local_11c = 0;
  local_8 = (undefined *)0x0;
  pcStack_12c = thunk_FUN_004036bc;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_00403c5c(param_2);
  local_18.wYear = *(WORD *)(param_4 + -0xe);
  local_18.wMonth = *(WORD *)(param_4 + -0x10);
  local_18.wDay = *(WORD *)(param_4 + -0x12);
  FUN_00403cf4((int *)&local_8,0x409b70);
  iVar2 = 0x100;
  lpDateStr = local_118;
  lpFormat = FUN_004040a0(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar2 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,iVar2);
  if (iVar2 != 0) {
    FUN_00403e8c(param_2,local_118,0x100);
    if (param_1 == 1) {
      if (DAT_004ac5b8 == 4) {
        if (DAT_004ac5ba == 1) {
          iVar2 = FUN_00403edc(*param_2);
          iVar2 = FUN_0040bf28(*param_2,iVar2);
          if (iVar2 == 4) {
            iVar2 = FUN_0040c014(*param_2,3);
            FUN_00403e14(&local_11c,local_118 + iVar2 + -1);
            uVar1 = FUN_0040c078(local_11c,2);
            FUN_00403d44(param_2,(undefined4 *)(local_118 + iVar2 + -1),uVar1);
          }
        }
      }
      else if (DAT_004ac5b8 == 0x11) {
        piVar3 = param_2;
        uVar1 = FUN_0040c078(*param_2,1);
        FUN_004040e4(*param_2,1,uVar1,piVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_130;
  pcStack_128 = FUN_00409b61;
  pcStack_12c = (code *)0x409b51;
  FUN_00403c5c(&local_11c);
  pcStack_12c = (code *)0x409b59;
  FUN_00403c5c((int *)&local_8);
  return;
}


