
/* ==== FUN_00426280 @ 00426280 ==== 
 * signature: undefined __thiscall FUN_00426280(void * this, int param_1)
 * body: 00426280-0042641e
 */

void __thiscall FUN_00426280(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  
  FUN_00425ac0(this,param_1);
  FUN_00425a40(this,param_1);
  iVar2 = FUN_00426f60(&DAT_005d3460,*(int *)((int)this + 0xe18));
  iVar2 = FUN_00425300(iVar2);
  if ((*(int *)((int)this + 0xe20) < iVar2) &&
     (pvVar5 = (void *)(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50),
     8 < *(int *)((int)pvVar5 + 0xac))) {
    iVar3 = FUN_004a8600(pvVar5,8);
    *(undefined1 *)(DAT_0073b0d0 + iVar3 * 0xa9 + 0x90) = 0;
  }
  if ((*(int *)((int)this + 0xe24) < iVar2) &&
     (pvVar5 = (void *)(DAT_00715e50 + *(int *)((int)this + 0xe18) * 0xf0),
     7 < *(int *)((int)pvVar5 + 0xac))) {
    iVar2 = FUN_004a8600(pvVar5,4);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    iVar2 = FUN_004a8600((void *)(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50),5);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    iVar2 = FUN_004a8600((void *)(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50),6);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
    iVar2 = FUN_004a8600((void *)(*(int *)((int)this + 0xe18) * 0xf0 + DAT_00715e50),7);
    *(undefined1 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x90) = 0;
  }
  cVar1 = FUN_00425bb0(this);
  if (cVar1 != '\0') {
    uVar4 = FUN_00425be0(this);
    if ((char)uVar4 != '\0') {
      FUN_004256c0(this);
    }
  }
  return;
}


