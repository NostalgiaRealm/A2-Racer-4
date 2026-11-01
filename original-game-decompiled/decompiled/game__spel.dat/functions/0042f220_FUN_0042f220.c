
/* ==== FUN_0042f220 @ 0042f220 ==== 
 * signature: undefined __thiscall FUN_0042f220(void * this, undefined4 param_1, int param_2)
 * body: 0042f220-0042f36e
 */

void __thiscall FUN_0042f220(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  float10 fVar4;
  longlong lVar5;
  
  iVar2 = (*(code *)**(undefined4 **)((int)this + 0x48))();
  if (iVar2 != 0) {
    FUN_00558625();
    iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x54) + 4) + param_2 * 0x10);
    lVar5 = __ftol();
    fVar4 = FUN_004a67f0(0x7128b0);
    if ((float10)((float)((int)lVar5 + iVar1) * 0.001) <=
        fVar4 - (float10)*(float *)((int)this + 0x60)) {
      iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x54) + 4) + 8 + param_2 * 0x10);
      lVar5 = __ftol();
      uVar3 = FUN_00558625();
      this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,
                                     *(int *)(*(int *)(*(int *)((int)this + 0x4c) + 4) +
                                             ((int)uVar3 % iVar2) * 4));
      FUN_0049e550(this_00,0);
      FUN_0049e340(this_00,(int)lVar5 + iVar1);
      fVar4 = FUN_004a67f0(0x7128b0);
      *(float *)((int)this + 0x60) = (float)fVar4;
    }
  }
  return;
}


