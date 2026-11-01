
/* ==== FUN_100045e0 @ 100045e0 ==== 
 * signature: undefined4 __cdecl FUN_100045e0(int param_1, int param_2)
 * body: 100045e0-10004735
 */

undefined4 __cdecl FUN_100045e0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  
  if ((((DAT_1002fce0 & 4) != 0) && (iVar2 = FUN_100048b0(), iVar2 == 0)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x47c,0,(byte *)"_CrtCheckMemory()"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_100073f0(9);
  BVar4 = FUN_10004d10(param_1);
  if ((BVar4 == 0) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x485,0,(byte *)"_CrtIsValidHeapPointer(pUserData)"),
     iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((((*(uint *)(param_1 + -0xc) & 0xffff) != 4) && (*(int *)(param_1 + -0xc) != 1)) &&
     (((*(uint *)(param_1 + -0xc) & 0xffff) != 2 &&
      ((*(int *)(param_1 + -0xc) != 3 &&
       (iVar2 = FUN_10003050(2,0x1002c4cc,0x48b,0,(byte *)"_BLOCK_TYPE_IS_VALID(pHead->nBlockUse)"),
       iVar2 == 1)))))) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if ((*(int *)(param_1 + -0xc) == 2) && (param_2 == 1)) {
    param_2 = 2;
  }
  if (((*(int *)(param_1 + -0xc) != 3) && (*(int *)(param_1 + -0xc) != param_2)) &&
     (iVar2 = FUN_10003050(2,0x1002c4cc,0x492,0,(byte *)"pHead->nBlockUse == nBlockUse"), iVar2 == 1
     )) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + -0x10);
  FUN_10007490(9);
  return uVar3;
}


