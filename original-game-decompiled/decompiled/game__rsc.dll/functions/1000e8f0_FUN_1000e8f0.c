
/* ==== FUN_1000e8f0 @ 1000e8f0 ==== 
 * signature: int __cdecl FUN_1000e8f0(LPSTR param_1, undefined2 param_2)
 * body: 1000e8f0-1000e966
 */

int __cdecl FUN_1000e8f0(LPSTR param_1,undefined2 param_2)

{
  LONG LVar1;
  undefined2 extraout_var;
  undefined2 uVar3;
  int iVar2;
  bool bVar4;
  
  LVar1 = InterlockedIncrement(&DAT_100317c4);
  bVar4 = DAT_100317b4 == 0;
  uVar3 = (short)((uint)LVar1 >> 0x10);
  if (!bVar4) {
    InterlockedDecrement(&DAT_100317c4);
    FUN_100073f0(0x13);
    uVar3 = extraout_var;
  }
  iVar2 = FUN_1000e970(param_1,CONCAT22(uVar3,param_2));
  if (bVar4) {
    InterlockedDecrement(&DAT_100317c4);
  }
  else {
    FUN_10007490(0x13);
  }
  return iVar2;
}


