
/* ==== FUN_004f5240 @ 004f5240 ==== 
 * signature: int __thiscall FUN_004f5240(void * this, uint param_1)
 * body: 004f5240-004f5273
 */

int __thiscall FUN_004f5240(void *this,uint param_1)

{
  int iVar1;
  
  if (((byte)*(undefined4 *)this & 0xc) == 4) {
    if (*(void **)((int)this + 0x58) != (void *)0x0) {
      iVar1 = FUN_00501770(*(void **)((int)this + 0x58),param_1);
      return iVar1;
    }
  }
  else {
    iVar1 = *(int *)((int)this + 0x58);
    if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) == param_1)) {
      return iVar1;
    }
  }
  return 0;
}


