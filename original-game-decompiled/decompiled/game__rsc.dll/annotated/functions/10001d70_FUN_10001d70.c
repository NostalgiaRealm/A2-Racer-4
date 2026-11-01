
/* ==== FUN_10001d70 @ 10001d70 ==== 
 * signature: undefined4 __cdecl FUN_10001d70(undefined * * param_1)
 * body: 10001d70-10001df1
 */

undefined4 __cdecl FUN_10001d70(undefined **param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if ((param_1 == (undefined **)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002c038,0x3a,0,(byte *)"stream != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uint)param_1[3] & 0x40) == 0) {
    FUN_10002e60(param_1);
    local_8 = FUN_10001e00((int *)param_1);
    FUN_10002ed0(param_1);
  }
  else {
    param_1[3] = (undefined *)0x0;
  }
  return local_8;
}


