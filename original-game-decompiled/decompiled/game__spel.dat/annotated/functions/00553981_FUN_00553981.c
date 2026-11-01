
/* ==== FUN_00553981 @ 00553981 ==== 
 * signature: undefined __stdcall FUN_00553981(void)
 * body: 00553981-00553986
 */

void FUN_00553981(void)

{
  void *this;
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  this = *(void **)(unaff_EBP + -0x14);
  uVar6 = *(uint *)(unaff_EBP + -0x18);
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    uVar5 = uVar6;
    if (uVar1 <= uVar6) {
      uVar5 = uVar1;
    }
    puVar3 = *(undefined2 **)(unaff_EBP + 8);
    puVar4 = *(undefined2 **)((int)this + 4);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  uVar1 = *(uint *)((int)this + 8);
  FUN_00553734(this,'\x01');
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)((int)this + 4) = iVar2 + 2;
  *(undefined1 *)(iVar2 + 1) = 0;
  *(uint *)((int)this + 0xc) = uVar6;
  if (uVar1 <= uVar6) {
    uVar6 = uVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint *)((int)this + 8) = uVar6;
  *(undefined2 *)(*(int *)((int)this + 4) + uVar6 * 2) = 0;
  return;
}


