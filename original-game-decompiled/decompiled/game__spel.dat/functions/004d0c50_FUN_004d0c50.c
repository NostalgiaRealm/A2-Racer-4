
/* ==== FUN_004d0c50 @ 004d0c50 ==== 
 * signature: void * __thiscall FUN_004d0c50(void * this, LPCSTR param_1, uint param_2)
 * body: 004d0c50-004d0d1f
 */

void * __thiscall FUN_004d0c50(void *this,LPCSTR param_1,uint param_2)

{
  FILE *pFVar1;
  
  if (*(int *)((int)this + 0x50) == 0) {
    pFVar1 = FUN_0054cd3c(param_1,param_2);
    if (pFVar1 != (FILE *)0x0) {
      *(int *)((int)this + 0xc) = (int)this + 4;
      *(int *)((int)this + 0x1c) = (int)this + 0x14;
      *(int *)((int)this + 0x20) = (int)this + 0x18;
      *(int *)((int)this + 0x2c) = (int)this + 0x24;
      *(undefined1 *)((int)this + 0x48) = 1;
      *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 8);
      *(int *)((int)this + 0x30) = (int)this + 0x28;
      *(undefined4 *)((int)this + 8) = 0;
      **(undefined4 **)((int)this + 0x20) = 0;
      **(undefined4 **)((int)this + 0x30) = 0;
      **(undefined4 **)((int)this + 0xc) = 0;
      **(undefined4 **)((int)this + 0x1c) = 0;
      **(undefined4 **)((int)this + 0x2c) = 0;
      if (*(char *)((int)this + 0x48) == '\0') {
        *(FILE **)((int)this + 0x1c) = pFVar1;
        *(char ***)((int)this + 0xc) = &pFVar1->_base;
        *(char ***)((int)this + 0x10) = &pFVar1->_base;
        *(FILE **)((int)this + 0x20) = pFVar1;
        *(int **)((int)this + 0x2c) = &pFVar1->_cnt;
        *(int **)((int)this + 0x30) = &pFVar1->_cnt;
      }
      *(FILE **)((int)this + 0x50) = pFVar1;
      *(undefined4 *)((int)this + 0x40) = DAT_00750064;
      *(undefined4 *)((int)this + 0x3c) = DAT_00750064;
      *(undefined4 *)((int)this + 0x38) = 0;
      FUN_004d0e60(this);
      return this;
    }
  }
  return (void *)0x0;
}


