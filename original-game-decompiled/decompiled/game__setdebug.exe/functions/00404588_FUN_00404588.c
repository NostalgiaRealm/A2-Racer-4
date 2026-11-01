
/* ==== FUN_00404588 @ 00404588 ==== 
 * signature: undefined __register FUN_00404588(LPCWSTR param_1, int param_2, int * param_3)
 * body: 00404588-00404610
 */

void FUN_00404588(LPCWSTR param_1,int param_2,int *param_3)

{
  uint uVar1;
  CHAR local_810 [2048];
  
  if (param_2 == 0) {
    FUN_004039b8(param_3);
  }
  else if (param_2 < 0x400) {
    uVar1 = WideCharToMultiByte(0,0,param_1,param_2,local_810,0x800,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00403aa0(param_3,(undefined4 *)local_810,uVar1);
  }
  else {
    uVar1 = WideCharToMultiByte(0,0,param_1,param_2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_00403aa0(param_3,(undefined4 *)0x0,uVar1);
    WideCharToMultiByte(0,0,param_1,param_2,(LPSTR)*param_3,uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  return;
}


