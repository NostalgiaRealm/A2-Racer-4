
/* ==== FUN_00409b74 @ 00409b74 ==== 
 * signature: undefined __register FUN_00409b74(int param_1, int * param_2, undefined4 param_3, int param_4)
 * body: 00409b74-00409c51
 */

void FUN_00409b74(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  LPCSTR lpFormat;
  LCID Locale;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int iVar1;
  int *piVar2;
  undefined4 uStack_12c;
  code *pcStack_128;
  code *pcStack_124;
  CHAR local_118 [256];
  SYSTEMTIME local_18;
  undefined *local_8;
  
  pcStack_124 = (code *)&stack0xfffffffc;
  local_8 = (undefined *)0x0;
  pcStack_128 = thunk_FUN_004036bc;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  FUN_00403c5c(param_2);
  local_18.wYear = *(WORD *)(param_4 + -0xe);
  local_18.wMonth = *(WORD *)(param_4 + -0x10);
  local_18.wDay = *(WORD *)(param_4 + -0x12);
  if (param_1 < 3) {
    FUN_00403cf4((int *)&local_8,0x409c68);
  }
  else {
    FUN_00403cf4((int *)&local_8,0x409c74);
  }
  iVar1 = 0x100;
  lpDateStr = local_118;
  lpFormat = FUN_004040a0(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,iVar1);
  if (iVar1 != 0) {
    FUN_00403e8c(param_2,local_118,0x100);
    if ((param_1 == 1) && (*(char *)*param_2 == '0')) {
      piVar2 = param_2;
      iVar1 = FUN_00403edc(*param_2);
      FUN_004040e4(*param_2,2,iVar1 - 1,piVar2);
    }
  }
  *in_FS_OFFSET = uStack_12c;
  pcStack_124 = FUN_00409c59;
  pcStack_128 = (code *)0x409c51;
  FUN_00403c5c((int *)&local_8);
  return;
}


