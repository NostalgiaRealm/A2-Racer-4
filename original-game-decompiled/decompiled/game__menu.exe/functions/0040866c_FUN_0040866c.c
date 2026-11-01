
/* ==== FUN_0040866c @ 0040866c ==== 
 * signature: undefined __register FUN_0040866c(undefined * param_1, uint param_2)
 * body: 0040866c-004086a9
 */

void FUN_0040866c(undefined *param_1,uint param_2)

{
  LPCSTR lpFileName;
  DWORD dwDesiredAccess;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE hTemplateFile;
  
  hTemplateFile = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x80;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = *(DWORD *)(&DAT_004aa150 + ((param_2 & 0xf0) >> 4) * 4);
  dwDesiredAccess = *(DWORD *)(&DAT_004aa144 + (param_2 & 3) * 4);
  lpFileName = FUN_004040a0(param_1);
  CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


