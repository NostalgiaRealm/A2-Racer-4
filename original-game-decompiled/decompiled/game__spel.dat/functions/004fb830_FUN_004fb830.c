
/* ==== FUN_004fb830 @ 004fb830 ==== 
 * signature: undefined4 * __thiscall FUN_004fb830(void * this, undefined4 param_1, int * param_2)
 * body: 004fb830-004fb876
 */

undefined4 * __thiscall FUN_004fb830(void *this,undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_004fb4d0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_005784b0;
  *(int *)((int)this + 0x70) = param_2[3];
  uVar1 = *(uint *)((int)this + 0x74);
  uVar2 = (param_2[5] ^ uVar1) & 1 ^ uVar1;
  *(uint *)((int)this + 0x74) = uVar2;
  *(uint *)((int)this + 0x74) =
       (param_2[6] & 1U) << 1 | CONCAT31((int3)(uVar1 >> 8),(char)uVar2) & 0xfffffffd;
  return this;
}


