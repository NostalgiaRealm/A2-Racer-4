
/* ==== FUN_004e5a30 @ 004e5a30 ==== 
 * signature: undefined __thiscall FUN_004e5a30(void * this, int param_1)
 * body: 004e5a30-004e5a62
 */

void __thiscall FUN_004e5a30(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  this_00 = *(void **)((int)this + 8);
  if (this_00 != *(void **)((int)this + 0xc)) {
    do {
      FUN_004e5650(this_00,(void *)*puVar1);
      this_00 = (void *)((int)this_00 + 0x10);
      puVar1 = puVar1 + 1;
    } while (this_00 != *(void **)((int)this + 0xc));
  }
  return;
}


