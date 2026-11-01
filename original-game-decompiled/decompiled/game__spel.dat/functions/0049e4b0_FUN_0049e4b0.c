
/* ==== FUN_0049e4b0 @ 0049e4b0 ==== 
 * signature: undefined __thiscall FUN_0049e4b0(void * this, int param_1)
 * body: 0049e4b0-0049e54a
 */

void __thiscall FUN_0049e4b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = FUN_0049e660((int)this);
  iVar1 = FUN_0049e370(iVar1);
  pcVar4 = *(char **)((int)this + 0x1c);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  uVar2 = FUN_004c7a10(pcVar4,iVar1,(uint)(param_1 != 0));
  *(uint *)((int)this + 0x38) = uVar2;
  FUN_004a0100((uint)(*(int *)((int)this + 0x40) != -1),
               (byte *)s__s___d__ID_not_set_for_this_soun_005ae758);
  FUN_004c7e20(*(int *)((int)this + 0x38),*(undefined4 *)((int)this + 0x40));
  FUN_004c7460(*(int *)((int)this + 0x38),0);
  uVar3 = FUN_004c7520(*(int *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  FUN_0049e460(this,*(int *)((int)this + 0x50));
  FUN_0049e3f0(this,*(int *)((int)this + 0x4c));
  return;
}


