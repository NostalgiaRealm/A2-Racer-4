
/* ==== FUN_00403d74 @ 00403d74 ==== 
 * signature: undefined __register FUN_00403d74(int * param_1, LPCWSTR param_2, int param_3)
 * body: 00403d74-00403e02
 */

void FUN_00403d74(int *param_1,LPCWSTR param_2,int param_3)

{
  uint uVar1;
  CHAR local_810 [2048];
  
  if (param_3 < 1) {
    FUN_00403c5c(param_1);
  }
  else {
    if (param_3 < 0x400) {
      uVar1 = WideCharToMultiByte(0,0,param_2,param_3,local_810,0x800,(LPCSTR)0x0,(LPBOOL)0x0);
      if (0 < (int)uVar1) {
        FUN_00403d44(param_1,(undefined4 *)local_810,uVar1);
        return;
      }
    }
    uVar1 = WideCharToMultiByte(0,0,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00403d44(param_1,(undefined4 *)0x0,uVar1);
    WideCharToMultiByte(0,0,param_2,param_3,(LPSTR)*param_1,uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  return;
}


