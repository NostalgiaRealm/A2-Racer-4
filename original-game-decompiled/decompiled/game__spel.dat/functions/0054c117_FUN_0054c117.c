
/* ==== FUN_0054c117 @ 0054c117 ==== 
 * signature: uint __thiscall FUN_0054c117(void * this, uint param_1)
 * body: 0054c117-0054c1cd
 */

uint __thiscall FUN_0054c117(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  short sVar5;
  
  uVar3 = **(uint **)((int)this + 0x1c);
  sVar5 = (short)param_1;
  if (((uVar3 == 0) || (uVar3 <= **(uint **)((int)this + 0xc))) ||
     ((sVar5 != -1 && (*(short *)(uVar3 - 2) != sVar5)))) {
    piVar4 = *(int **)((int)this + 0x50);
    if ((piVar4 != (int *)0x0) && (sVar5 != -1)) {
      if (*(int *)((int)this + 0x38) == 0) {
        uVar3 = FUN_0055b84d(param_1,piVar4);
        if ((short)uVar3 != -1) {
          return param_1;
        }
        return 0xffff;
      }
      pvVar1 = *(void **)((int)this + 0x44);
      iVar2 = *(int *)((int)pvVar1 + 8);
      if (iVar2 != 0) {
        FUN_00471de0(pvVar1);
        piVar4 = (int *)FUN_0054b779(*(int *)((int)pvVar1 + 4),*(int **)((int)this + 0x50),iVar2);
        if ((char)piVar4 != '\0') {
          FUN_0040f800(*(void **)((int)this + 0x44),0,0xffffffff);
          *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
          return CONCAT22((short)((uint)*(undefined4 *)((int)this + 0x3c) >> 0x10),sVar5);
        }
      }
    }
    uVar3 = CONCAT22((short)((uint)piVar4 >> 0x10),0xffff);
  }
  else {
    FUN_0054c595((int)this);
    uVar3 = -(uint)(sVar5 != -1) & param_1;
  }
  return uVar3;
}


