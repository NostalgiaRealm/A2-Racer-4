
/* ==== FUN_10004760 @ 10004760 ==== 
 * signature: undefined __cdecl FUN_10004760(int param_1, undefined4 param_2)
 * body: 10004760-100047fc
 */

void __cdecl FUN_10004760(int param_1,undefined4 param_2)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  FUN_100073f0(9);
  BVar2 = FUN_10004d10(param_1);
  if (BVar2 != 0) {
    if (((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
        ((*(uint *)(param_1 + -0xc) & 0xffff) != 2)) &&
       ((*(int *)(param_1 + -0xc) != 3 &&
        (iVar3 = FUN_10003050(2,0x1002c4cc,0x4d3,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)")
        , iVar3 == 1)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)(param_1 + -0xc) = param_2;
  }
  FUN_10007490(9);
  return;
}


