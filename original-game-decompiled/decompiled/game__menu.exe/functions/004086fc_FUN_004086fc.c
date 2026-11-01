
/* ==== FUN_004086fc @ 004086fc ==== 
 * signature: DWORD __register FUN_004086fc(HANDLE param_1, LPCVOID param_2, DWORD param_3)
 * body: 004086fc-00408727
 */

DWORD FUN_004086fc(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_10;
  
  local_10 = param_3;
  BVar1 = WriteFile(param_1,param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}


