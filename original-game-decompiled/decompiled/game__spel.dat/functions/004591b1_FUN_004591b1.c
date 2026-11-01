
/* ==== FUN_004591b1 @ 004591b1 ==== 
 * signature: undefined4 __thiscall FUN_004591b1(void * this, float param_1)
 * body: 004591b1-004591bf
 */

undefined4 __thiscall FUN_004591b1(void *this,float param_1)

{
  undefined4 *this_00;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 0xac);
  *(float *)((int)this + 8) = param_1 + *(float *)((int)this + 8);
  if (puVar3 != (undefined4 *)0x0) {
    *(float *)((int)this + 0x40) =
         param_1 * *(float *)((int)this + 0x6c) + *(float *)((int)this + 0x40);
    *(float *)((int)this + 0x44) =
         param_1 * *(float *)((int)this + 0x70) + *(float *)((int)this + 0x44);
    *(float *)((int)this + 0x48) =
         param_1 * *(float *)((int)this + 0x74) + *(float *)((int)this + 0x48);
    this_00 = *(undefined4 **)((int)this + 0xac);
    while (this_00 != (undefined4 *)0x0) {
      cVar1 = FUN_00459560(this_00,param_1);
      if (cVar1 == '\0') {
        puVar2 = (undefined4 *)FUN_0045e0d0((int)this_00);
        puVar3 = FUN_0045e040(this_00);
        *(undefined4 **)((int)this + 0xac) = puVar3;
        this_00 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)FUN_0045e0d0((int)this_00);
        this_00 = puVar3;
      }
    }
    return CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
  return 0;
}


