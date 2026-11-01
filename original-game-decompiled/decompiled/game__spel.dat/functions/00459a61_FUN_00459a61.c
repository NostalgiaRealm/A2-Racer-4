
/* ==== FUN_00459a61 @ 00459a61 ==== 
 * signature: undefined4 __thiscall FUN_00459a61(void * this, float param_1, float param_2)
 * body: 00459a61-00459a6f
 */

uint __thiscall FUN_00459a61(void *this,float param_1,float param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *this_00;
  
  this_00 = *(undefined4 **)((int)this + 0xac);
  *(float *)((int)this + 8) = param_1 + *(float *)((int)this + 8);
  if (this_00 != (undefined4 *)0x0) {
    do {
      cVar1 = FUN_00459c30(this_00,param_1,param_2);
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
    } while (this_00 != (undefined4 *)0x0);
    return CONCAT31((int3)((uint)puVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


