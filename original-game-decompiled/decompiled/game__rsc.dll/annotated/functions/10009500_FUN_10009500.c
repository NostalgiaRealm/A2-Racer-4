
/* ==== FUN_10009500 @ 10009500 ==== 
 * signature: LPVOID __cdecl FUN_10009500(LPVOID param_1, uint param_2)
 * body: 10009500-100095ac
 */

LPVOID __cdecl FUN_10009500(LPVOID param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_2 < 0xffffffe1) {
    FUN_100073f0(9);
    puVar1 = (uint *)FUN_10009930((int)param_1);
    if (puVar1 == (uint *)0x0) {
      FUN_10007490(9);
      if (param_2 == 0) {
        param_2 = 1;
      }
      local_8 = HeapReAlloc(DAT_10031a8c,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
    else {
      local_8 = (LPVOID)0x0;
      if (param_2 <= DAT_10030004) {
        iVar2 = FUN_1000a800(puVar1,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_8 = param_1;
        }
      }
      FUN_10007490(9);
    }
  }
  else {
    local_8 = (LPVOID)0x0;
  }
  return local_8;
}


