
/* ==== FUN_00407cf4 @ 00407cf4 ==== 
 * signature: undefined __register FUN_00407cf4(undefined * param_1, uint param_2)
 * body: 00407cf4-00407d31
 */

void FUN_00407cf4(undefined *param_1,uint param_2)

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
  dwShareMode = *(DWORD *)(&DAT_0044613c + ((param_2 & 0xf0) >> 4) * 4);
  dwDesiredAccess = *(DWORD *)(&DAT_00446130 + (param_2 & 3) * 4);
  lpFileName = FUN_00403dfc(param_1);
  CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
              dwFlagsAndAttributes,hTemplateFile);
  return;
}


