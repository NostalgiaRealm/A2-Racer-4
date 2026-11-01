
/* ==== FUN_00494560 @ 00494560 ==== 
 * signature: undefined __thiscall FUN_00494560(void * this, int param_1)
 * body: 00494560-00494666
 */

void __thiscall FUN_00494560(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c [3];
  
  if (DAT_006fb964 != 0) {
    FUN_004944e0(this,param_1);
    puVar2 = (undefined4 *)FUN_00493500(this,local_c,DAT_006fbaa4);
    FUN_00493090(*(void **)((int)this + 0x18),DAT_006fbaa4,*puVar2,puVar2[1],puVar2[2]);
    FUN_00493d60((int)this);
    iVar4 = 0;
    if (0 < DAT_005d2ab0) {
      piVar3 = &DAT_005973c8;
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x20) + 4);
        puVar2 = (undefined4 *)FUN_00493500(this,local_c,*piVar3);
        FUN_00493090(*(void **)(iVar1 + iVar4 * 4),*piVar3,*puVar2,puVar2[1],puVar2[2]);
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 0x16;
      } while (iVar4 < DAT_005d2ab0);
    }
    if ((DAT_00712784 == 1) && (((byte)DAT_005ab3c0 & 0x80) == 0)) {
      FUN_00493ed0(this,0);
      FUN_00493f10(this,0);
      return;
    }
    FUN_00493ed0(this,1);
    if ((*(int *)((int)this + 0x40) != 5) && (*(int *)((int)this + 0x40) != 0)) {
      FUN_00493f10(this,1);
    }
  }
  return;
}


