
/* ==== FUN_004899a0 @ 004899a0 ==== 
 * signature: undefined __thiscall FUN_004899a0(void * this, int param_1)
 * body: 004899a0-00489a99
 */

void __thiscall FUN_004899a0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  int iVar3;
  
  iVar1 = FUN_0049df30(param_1);
  if (iVar1 != 0) {
    switch(iVar1) {
    case 1:
      iVar1 = *(int *)((int)this + 0x374) + 10;
      *(int *)((int)this + 0x374) = iVar1;
      if (100 < iVar1) {
        *(undefined4 *)((int)this + 0x374) = 100;
      }
      uVar2 = FUN_0049df20(param_1);
      *(undefined4 *)((int)this + 0x37c) = uVar2;
      return;
    case 2:
      uVar2 = FUN_0049df20(param_1);
      *(undefined4 *)((int)this + 0x27c) = uVar2;
      FUN_00489b70(this,*(int **)((int)this + 0x264));
      return;
    case 3:
      uVar2 = FUN_0049df20(param_1);
      *(undefined4 *)((int)this + 0x27c) = uVar2;
      FUN_00489b70(this,*(int **)((int)this + 0x268));
      return;
    case 4:
      uVar2 = FUN_0049df20(param_1);
      *(undefined4 *)((int)this + 0x27c) = uVar2;
      FUN_00489b70(this,*(int **)((int)this + 0x26c));
      return;
    case 5:
      uVar2 = FUN_0049df20(param_1);
      *(undefined4 *)((int)this + 0x27c) = uVar2;
      FUN_00489b70(this,*(int **)((int)this + 0x270));
      return;
    case 6:
      iVar1 = FUN_0049df20(param_1);
      iVar3 = 0;
      this_00 = (void *)FUN_0049eb50(&DAT_006fbb5c,iVar1);
      FUN_0049e550(this_00,iVar3);
    }
  }
  return;
}


