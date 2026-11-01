
/* ==== FUN_0048d8c8 @ 0048d8c8 ==== 
 * signature: undefined FUN_0048d8c8(void)
 * body: 0048d8c8-0048d90b
 */

int FUN_0048d8c8(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  uVar3 = 0;
  do {
    cVar1 = FUN_0048d8c0(param_1,uVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_0048e6d4(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xcc),uVar3);
      bVar5 = SCARRY4(iVar4,*(int *)(uVar2 + 0x34));
      iVar4 = iVar4 + *(int *)(uVar2 + 0x34);
      if (bVar5) {
        thunk_FUN_00402808(uVar2);
      }
    }
    uVar3 = uVar3 + 1;
  } while ((char)uVar3 != '\x05');
  return iVar4;
}


