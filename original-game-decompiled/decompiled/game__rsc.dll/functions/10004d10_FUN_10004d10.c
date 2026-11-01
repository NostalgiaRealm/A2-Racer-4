
/* ==== FUN_10004d10 @ 10004d10 ==== 
 * signature: BOOL __cdecl FUN_10004d10(int param_1)
 * body: 10004d10-10004d95
 */

BOOL __cdecl FUN_10004d10(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = FID_conflict_AtlIsValidAddress((void *)(param_1 + -0x20),0x20,1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else {
      uVar3 = FUN_10009930(param_1 + -0x20);
      if (uVar3 == 0) {
        if ((DAT_100314ac & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_10031a8c,0,(LPCVOID)(param_1 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = FUN_10009990(uVar3,param_1 + -0x20);
      }
    }
  }
  return BVar1;
}


