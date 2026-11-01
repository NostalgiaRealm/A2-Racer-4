
/* ==== FUN_0041cfb0 @ 0041cfb0 ==== 
 * signature: undefined4 __cdecl FUN_0041cfb0(int param_1, int param_2)
 * body: 0041cfb0-0041d00c
 */

undefined4 __cdecl FUN_0041cfb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0xfffffffc;
  while( true ) {
    uVar1 = FUN_004a71e0(uVar3 + param_2);
    if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 2) {
      iVar2 = FUN_0041ce20(uVar1,param_1);
    }
    else {
      iVar2 = FUN_0041cec0(uVar1,param_1);
    }
    if (iVar2 == 1) break;
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
      return 1;
    }
  }
  return 0;
}


