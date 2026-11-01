
/* ==== FUN_004053f7 @ 004053f7 ==== 
 * signature: undefined FUN_004053f7(void)
 * body: 004053f7-00405423
 */

DWORD FUN_004053f7(undefined4 *param_1,undefined4 param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD DStack_4;
  
  DVar2 = param_1[3];
  if (0 < (int)DVar2) {
    param_1[3] = 0;
    DStack_4 = param_3;
    BVar1 = WriteFile((HANDLE)*param_1,(LPCVOID)param_1[5],DVar2,&DStack_4,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      return DVar2;
    }
  }
  return 0;
}


