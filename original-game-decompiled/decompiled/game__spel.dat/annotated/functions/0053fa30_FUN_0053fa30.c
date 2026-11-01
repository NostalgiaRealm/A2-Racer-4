
/* ==== FUN_0053fa30 @ 0053fa30 ==== 
 * signature: undefined __thiscall FUN_0053fa30(void * this, int param_1)
 * body: 0053fa30-0053fa83
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053fa30(void *this,int param_1)

{
  int *this_00;
  
  this_00 = *(int **)(*(int *)((int)this + 4) + 0x20);
  FUN_0053d370(this_00,param_1,DAT_0074d62c,1.0);
  if ((_DAT_0074d63c <= (float)this_00[0x16]) ||
     ((*(uint *)(this_00[0x10] + 0x5c) & 0x300) == 0x100)) {
    FUN_0053e860(*(void **)((int)this + 4),this_00);
  }
  return;
}


