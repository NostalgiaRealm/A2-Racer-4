
/* ==== FUN_004048a0 @ 004048a0 ==== 
 * signature: undefined __register FUN_004048a0(LPCWSTR param_1, int param_2, int * param_3)
 * body: 004048a0-00404928
 */

void FUN_004048a0(LPCWSTR param_1,int param_2,int *param_3)

{
  uint uVar1;
  CHAR local_810 [2048];
  
  if (param_2 == 0) {
    FUN_00403c5c(param_3);
  }
  else if (param_2 < 0x400) {
    uVar1 = WideCharToMultiByte(0,0,param_1,param_2,local_810,0x800,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00403d44(param_3,(undefined4 *)local_810,uVar1);
  }
  else {
    uVar1 = WideCharToMultiByte(0,0,param_1,param_2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00403d44(param_3,(undefined4 *)0x0,uVar1);
    WideCharToMultiByte(0,0,param_1,param_2,(LPSTR)*param_3,uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  return;
}


